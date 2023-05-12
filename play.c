#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "fun.h"
#define SCREEN_H 1440
#define SCREEN_W 803
void playGame()
{
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Surface *screen = NULL;
    screen = SDL_SetVideoMode(1920, 803, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);


    if (screen == NULL)
    {
        printf("Can't set video mode: %s \n", SDL_GetError());
        return;
    }


    back b;
int maxScrollX = b.posback.w - screen->w;
    Personne u_u;

    init_back(&b);
    initPerso(&u_u);

    int run = 1;
    Uint32 dt, t_prev;

    while (run)
    {
b.anim_counter++;
        t_prev = SDL_GetTicks();
        SDL_Event e;
        affich_back(&b, screen);
        afficherPerso(u_u, screen);
        SDL_Flip(screen);

        if (SDL_PollEvent(&e))
        {
            switch (e.type)
            {
                case SDL_QUIT:
                    run = 0;
                    break;
                case SDL_KEYDOWN:
                    switch (e.key.keysym.sym)
                    {
                        case SDLK_RIGHT:
                            u_u.move_direction = 1;
                            break;
                        case SDLK_LEFT:
                            u_u.move_direction = 0;
                            break;
                        case SDLK_UP:
                            u_u.up = 1;
                            break;
                    }
                    break;
                case SDL_KEYUP:
                    switch (e.key.keysym.sym)
                    {
                        case SDLK_RIGHT:
                        case SDLK_LEFT:
                            u_u.move_direction = -1;
                            break;
                    }
                    break;
            }
        }

        dt = SDL_GetTicks() - t_prev;

         

        
        scroll(&b, u_u.move_direction);
movePerso(&u_u, dt);
        saut(&u_u, dt, 355);


    

if (u_u.move_direction == 1) {
        u_u.pos1.x += u_u.vitesse;
    } else if (u_u.move_direction == 0) {
        u_u.pos1.x -= u_u.vitesse;
    }

    // Adjust the character's position to stay within the visible area
    if (u_u.pos1.x < 0) {
        u_u.pos1.x = 0;
    } else if (u_u.pos1.x > maxScrollX) {
        u_u.pos1.x = maxScrollX;
    }

    // Update the camera's position based on the character's position
    b.poscam.x = u_u.pos1.x - (screen->w / 2);

    // Adjust the camera's position to stay within the scrolling limits
    if (b.poscam.x < 0) {
        b.poscam.x = 0;
    } else if (b.poscam.x > maxScrollX) {
        b.poscam.x = maxScrollX;
    }}
    SDL_Quit();
}
int main(int argc, char *argv[])
{
 int k=0,s,v,n;
    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024);
    SDL_Surface *screen = NULL;
    Mix_Music *music = NULL;
    Mix_Chunk *click = NULL;
    image imageBACK, imageBACK_2, imageBACK_3, imageBTN1, imageBTN2, imageBTN3, imageBTN4, 
	imageBTN1_act, imageBTN2_act, imageBTN3_act, imageBTN4_act, 
	imageBTN_RET, imageBTN_RET_act, imageBTN_FULL, imageBTN_FULL_act, imageBTN_FULL_2, imageBTN_FULL_2_act, 
	imageBTN_ON, imageBTN_OFF, image_SLIDER, image_BTN_SLIDER;
    SDL_Event event;
    int running = 1, continue_running = 1, frame = 0, done = 1, etat = 0, counterr = 0;

    screen = SDL_SetVideoMode(SCREEN_H, SCREEN_W, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);
    
    initialiser_imageBACK(&imageBACK);
    initialiser_imageBACK_2(&imageBACK_2);
    initialiser_imageBACK_3(&imageBACK_3);
    initialiser_imageBOUTON1(&imageBTN1);
    initialiser_imageBOUTON2(&imageBTN2);
    initialiser_imageBOUTON3(&imageBTN3);
    initialiser_imageBOUTON4(&imageBTN4);
    initialiser_imageBOUTON1_act(&imageBTN1_act);
    initialiser_imageBOUTON2_act(&imageBTN2_act);
    initialiser_imageBOUTON3_act(&imageBTN3_act);
    initialiser_imageBOUTON4_act(&imageBTN4_act);
    initialiser_btn_retour(&imageBTN_RET);
    initialiser_btn_retour_act(&imageBTN_RET_act);
    initialiser_btn_full(&imageBTN_FULL);
    initialiser_btn_full_act(&imageBTN_FULL_act);
    initialiser_btn_full_2(&imageBTN_FULL_2);
    initialiser_btn_full_2_act(&imageBTN_FULL_2_act);
    initialiser_btn_on(&imageBTN_ON);
    initialiser_btn_off(&imageBTN_OFF);
    initialiser_vol_slider(&image_SLIDER);
    initialiser_vol_btn(&image_BTN_SLIDER);
    initialiser_audio(music);
    initialiser_audiobref(click);
    
    
    if( screen == NULL )
    {
        printf( "Can't set video mode: %s \n", SDL_GetError( ) );
        return EXIT_FAILURE;
    }
    
    while (running)
    {
	int x, y;
   	SDL_GetMouseState(&x,&y);
   	printf("%d:%d\n",x,y);
        while (SDL_PollEvent(&event)) 
        {
            if (event.type == SDL_QUIT)
            {
                running = 0;
                continue_running = 0;
            }
            else if (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_SPACE) 
            {
                running = 0;
                continue_running = 1;
            }
        }
  
  char filename[100];
SDL_Surface *image = IMG_Load(filename);
        sprintf(filename, "./crow/frame_%02d_delay-0.07s.png", frame);
        
        SDL_BlitSurface(image, NULL, screen, NULL);
    
        SDL_Flip(screen);
        frame++;
        if (frame == 23) 
        { frame = 0; }
        SDL_Delay(1);
    }
SDL_FreeSurface(screen);

    if (!continue_running) 
    {
        SDL_FreeSurface(screen);
        SDL_Quit();
    }

    while(done)
    {
	int x, y;

   	SDL_GetMouseState(&x,&y);
   	printf("%d:%d\n",x,y);

        if(etat==0)
        {
 	  


   

            //ANIMATION

		afficher_image(screen, imageBACK);  

//             
		afficher_image(screen, imageBTN1);
                afficher_image(screen, imageBTN2);
                afficher_image(screen, imageBTN3);
                afficher_image(screen, imageBTN4);
            if (k==0)
            {

                afficher_image(screen, imageBTN1_act);

               afficher_image(screen, imageBTN2);
                afficher_image(screen, imageBTN3);
                afficher_image(screen, imageBTN4);

            }
            else if (k==1)
            {
                afficher_image(screen, imageBTN1);
                afficher_image(screen, imageBTN2_act);
                afficher_image(screen, imageBTN3);
                afficher_image(screen, imageBTN4);            
            }
            else if (k==2)
            {
                afficher_image(screen, imageBTN1);
                afficher_image(screen, imageBTN2);
                afficher_image(screen, imageBTN3_act);
                afficher_image(screen, imageBTN4);            
            }
            else if (k==3)
            {
                afficher_image(screen, imageBTN1);
                afficher_image(screen, imageBTN2);
                afficher_image(screen, imageBTN3);
                afficher_image(screen, imageBTN4_act);
            }


            while(SDL_PollEvent(&event))
            {
                switch(event.type)
                {
                    case SDL_QUIT:
                        done = 0;
                        break;
                    
                    case SDL_KEYDOWN:
                    {
                        if(event.key.keysym.sym == SDLK_ESCAPE)
                        {
                            screen = SDL_SetVideoMode(SCREEN_H, SCREEN_W, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);
                            putenv("SDL_VIDEO_CENTERED=1");
                        }
                        else if (event.key.keysym.sym == SDLK_UP)
                        {
                            k = (k + 3) % 4;
                        }
                        else if (event.key.keysym.sym == SDLK_DOWN)
                        {
                            if (k == 3)
                                k = 0;
                            else
                                k++;                            
                        }
                        else if ((event.key.keysym.sym == SDLK_SPACE)||(event.key.keysym.sym == SDLK_RETURN))
                        {
                            if (k==0)
                            {
                               playGame();
                            }
                            else if (k==1)
                            {
                                etat=1;
                                initialiser_audiobref(click);
                            }
                            else if (k==2)
                            {
                                initialiser_audiobref(click);
                            }
                            else if (k==3)
                            {
                                done=0;
                                initialiser_audiobref(click);
                            }
                        }
                        break;
                    }

                    case SDL_MOUSEBUTTONDOWN:
                    {
                        if (event.button.button ==SDL_BUTTON_LEFT)
                        {
                            if (event.button.x>imageBTN1.pos_img.x && event.button.x<imageBTN1.pos_img.x+imageBTN1.pos_img.w &&
                                event.button.y>imageBTN1.pos_img.y && event.button.y<imageBTN1.pos_img.y+imageBTN1.pos_img.h)
                            {
                              playGame();
                            }
                            else if (event.button.x>imageBTN2.pos_img.x && event.button.x<imageBTN2.pos_img.x+imageBTN2.pos_img.w &&
                                    event.button.y>imageBTN2.pos_img.y && event.button.y<imageBTN2.pos_img.y+imageBTN2.pos_img.h)
                            {
                                etat=1;
                                initialiser_audiobref(click);
                            }
                            else if (event.button.x>imageBTN3.pos_img.x && event.button.x<imageBTN3.pos_img.x+imageBTN3.pos_img.w &&
                                    event.button.y>imageBTN3.pos_img.y && event.button.y<imageBTN3.pos_img.y+imageBTN3.pos_img.h)
                            {
                                initialiser_audiobref(click);
                            }
                            else if (event.button.x>imageBTN4.pos_img.x && event.button.x<imageBTN4.pos_img.x+imageBTN4.pos_img.w && 
                                    event.button.y>imageBTN4.pos_img.y && event.button.y<imageBTN4.pos_img.y+imageBTN4.pos_img.h)
                            {
                                done=0;
                                initialiser_audiobref(click);
                            }
                        }
                    }

                    case SDL_MOUSEMOTION:
                    {
                        if (event.motion.x>imageBTN1.pos_img.x && event.motion.x<imageBTN1.pos_img.x+imageBTN1.pos_img.w && 
                            event.motion.y>imageBTN1.pos_img.y && event.motion.y<imageBTN1.pos_img.y+imageBTN1.pos_img.h)
                            k=0;
                        else if (event.motion.x>imageBTN2.pos_img.x && event.motion.x<imageBTN2.pos_img.x+imageBTN2.pos_img.w && 
                                event.motion.y>imageBTN2.pos_img.y && event.motion.y<imageBTN2.pos_img.y+imageBTN2.pos_img.h)
                            k=1;
                        else if (event.motion.x>imageBTN3.pos_img.x && event.motion.x<imageBTN3.pos_img.x+imageBTN3.pos_img.w && 
                                event.motion.y>imageBTN3.pos_img.y && event.motion.y<imageBTN3.pos_img.y+imageBTN3.pos_img.h)
                            k=2;
                        else if (event.motion.x>imageBTN4.pos_img.x && event.motion.x<imageBTN4.pos_img.x+imageBTN4.pos_img.w && 
                                event.motion.y>imageBTN4.pos_img.y && event.motion.y<imageBTN4.pos_img.y+imageBTN4.pos_img.h)
                            k=3;
                        else 
                            k=4;
                    }
                }
            }
        }
        else if(etat==1)
        {
            //SDL_BlitSurface(image5,&positionFond,ecran,&positionimage5);
            afficher_image(screen, imageBACK_2);
            if (s==0)
            {
                afficher_image(screen, imageBTN_RET);
                afficher_image(screen, imageBTN_FULL);
                afficher_image(screen, imageBTN_FULL_2);
                afficher_image(screen, imageBTN_ON);
                afficher_image(screen, image_SLIDER);
                afficher_image(screen, image_BTN_SLIDER);
                afficher_image(screen, imageBTN_OFF);
            }
            else if(s==1)
            {
                afficher_image(screen, imageBTN_RET_act);
                afficher_image(screen, imageBTN_FULL);
                afficher_image(screen, imageBTN_FULL_2);
                afficher_image(screen, imageBTN_ON);
                afficher_image(screen, image_SLIDER);
                afficher_image(screen, image_BTN_SLIDER);
                afficher_image(screen, imageBTN_OFF);
            }
            else if(s==2)
            {
                afficher_image(screen, imageBTN_RET);
                afficher_image(screen, imageBTN_FULL_act);
                afficher_image(screen, imageBTN_FULL_2);
                afficher_image(screen, imageBTN_ON);
                afficher_image(screen, image_SLIDER);
                afficher_image(screen, image_BTN_SLIDER);
                afficher_image(screen, imageBTN_OFF);
            }
            else if(s==3)
            {
                afficher_image(screen, imageBTN_RET);
                afficher_image(screen, imageBTN_FULL);
                afficher_image(screen, imageBTN_FULL_2_act);
                afficher_image(screen, imageBTN_ON);
                afficher_image(screen, image_SLIDER);
                afficher_image(screen, image_BTN_SLIDER);
                afficher_image(screen, imageBTN_OFF);
            }
            else if(s==4)
            {
                afficher_image(screen, imageBTN_RET);
                afficher_image(screen, imageBTN_FULL);
                afficher_image(screen, imageBTN_FULL_2);
                afficher_image(screen, imageBTN_ON);
                afficher_image(screen, image_SLIDER);
                afficher_image(screen, image_BTN_SLIDER);
                afficher_image(screen, imageBTN_OFF);
            }
            else if(s==5)
            {
                afficher_image(screen, imageBTN_RET);
                afficher_image(screen, imageBTN_FULL);
                afficher_image(screen, imageBTN_FULL_2);
                afficher_image(screen, imageBTN_ON);
                afficher_image(screen, image_SLIDER);
                afficher_image(screen, image_BTN_SLIDER);
                afficher_image(screen, imageBTN_OFF);
            }
            while(SDL_PollEvent(&event))
            {
                switch(event.type)
                {
                    case SDL_QUIT:
                        done = 0;
                        break;
                
                    case SDL_KEYDOWN:
                    {
                        if(event.key.keysym.sym == SDLK_ESCAPE)
                        {
                            putenv("SDL_VIDEO_CENTERED=1");
                            screen = SDL_SetVideoMode(SCREEN_H, SCREEN_W, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);
                        }
                        else if (event.key.keysym.sym == SDLK_LEFT)
                        {
                            v-=5;
                            Mix_VolumeMusic(v);
                            image_BTN_SLIDER.pos_img.x-=15;
                            if (image_BTN_SLIDER.pos_img.x<=210)
                                image_BTN_SLIDER.pos_img.x=210;
                        }
                        else if (event.key.keysym.sym == SDLK_RIGHT)
                        {
                            v+=5;
                            Mix_VolumeMusic(v);
                            image_BTN_SLIDER.pos_img.x+=15;
                            if (image_BTN_SLIDER.pos_img.x>=310)
                                image_BTN_SLIDER.pos_img.x=310;
                        }
                    }

                    case SDL_MOUSEBUTTONDOWN:
                    {
                        if (event.button.button ==SDL_BUTTON_LEFT)
                        {
                            if (event.button.x>imageBTN_FULL.pos_img.x && event.button.x<imageBTN_FULL.pos_img.x+imageBTN_FULL.pos_img.w && 
                                event.button.y>imageBTN_FULL.pos_img.y && event.button.y<imageBTN_FULL.pos_img.y+imageBTN_FULL.pos_img.h)
                            {
                                putenv("SDL_VIDEO_CENTERED=1");
                                screen = SDL_SetVideoMode(1780,950, 32, SDL_HWSURFACE|SDL_DOUBLEBUF|SDL_FULLSCREEN);
                                initialiser_audiobref(click);
                            }
                            else if (event.button.x>imageBTN_FULL_2.pos_img.x && event.button.x<imageBTN_FULL_2.pos_img.x+imageBTN_FULL_2.pos_img.w && 
                                    event.button.y>imageBTN_FULL_2.pos_img.y && event.button.y<imageBTN_FULL_2.pos_img.y+imageBTN_FULL_2.pos_img.h)
                            {
                                putenv("SDL_VIDEO_CENTERED=1");
                                screen = SDL_SetVideoMode(SCREEN_H, SCREEN_W, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);
                                initialiser_audiobref(click);
                            }
                            else if (event.button.x>imageBTN_ON.pos_img.x && event.button.x<imageBTN_ON.pos_img.x+imageBTN_ON.pos_img.w && 
                                    event.button.y>imageBTN_ON.pos_img.y && event.button.y<imageBTN_ON.pos_img.y+imageBTN_ON.pos_img.h)
                            {
                                v=128;
                                Mix_VolumeMusic(v);
                                image_BTN_SLIDER.pos_img.x=425;
                                initialiser_audiobref(click);
                            }
                            else if (event.button.x>imageBTN_OFF.pos_img.x && event.button.x<imageBTN_OFF.pos_img.x+imageBTN_OFF.pos_img.w && 
                                    event.button.y>imageBTN_OFF.pos_img.y && event.button.y<imageBTN_OFF.pos_img.y+imageBTN_OFF.pos_img.h)
                            {
                                v=0;
                                Mix_VolumeMusic(v);
                                image_BTN_SLIDER.pos_img.x=210;
                                initialiser_audiobref(click);
                            }
                            else if (event.button.x>imageBTN_RET.pos_img.x && event.button.x<imageBTN_RET.pos_img.x+imageBTN_RET.pos_img.w && 
                                    event.button.y>imageBTN_RET.pos_img.y && event.button.y<imageBTN_RET.pos_img.y+imageBTN_RET.pos_img.h)
                            {
                                etat=0;
                                initialiser_audiobref(click);
                            }
                            else if (event.button.x>image_BTN_SLIDER.pos_img.x && event.button.x<image_BTN_SLIDER.pos_img.x+image_BTN_SLIDER.pos_img.w && 
                                    event.button.y>image_BTN_SLIDER.pos_img.y && event.button.y<image_BTN_SLIDER.pos_img.y+image_BTN_SLIDER.pos_img.h)
                            {
                                n=1;
                                initialiser_audiobref(click);
                            }
                            break;
                            case SDL_MOUSEBUTTONUP:
                            n=0;
                            break;
                        }
                    }

                    case SDL_MOUSEMOTION:
                    {
                        if (event.motion.x>imageBTN_FULL.pos_img.x && event.motion.x<imageBTN_FULL.pos_img.x+imageBTN_FULL.pos_img.w && 
                            event.motion.y>imageBTN_FULL.pos_img.y && event.motion.y<imageBTN_FULL.pos_img.y+imageBTN_FULL.pos_img.h)
                            s=2;
                        else if (event.motion.x>imageBTN_FULL_2.pos_img.x && event.motion.x<imageBTN_FULL_2.pos_img.x+imageBTN_FULL_2.pos_img.w && 
                                event.motion.y>imageBTN_FULL_2.pos_img.y && event.motion.y<imageBTN_FULL_2.pos_img.y+imageBTN_FULL_2.pos_img.h)
                            s=3;
                        else if (event.motion.x>imageBTN_ON.pos_img.x && event.motion.x<imageBTN_ON.pos_img.x+imageBTN_ON.pos_img.w && 
                                event.motion.y>imageBTN_ON.pos_img.y && event.motion.y<imageBTN_ON.pos_img.y+imageBTN_ON.pos_img.h)
                            s=4;
                        else if (event.motion.x>imageBTN_OFF.pos_img.x && event.motion.x<imageBTN_OFF.pos_img.x+imageBTN_OFF.pos_img.w && 
                                event.motion.y>imageBTN_OFF.pos_img.y && event.motion.y<imageBTN_OFF.pos_img.y+imageBTN_OFF.pos_img.h)
                            s=5;                
                        else if (event.motion.x>imageBTN_RET.pos_img.x && event.motion.x<imageBTN_RET.pos_img.x+imageBTN_RET.pos_img.w && 
                                event.motion.y>imageBTN_RET.pos_img.y && event.motion.y<imageBTN_RET.pos_img.y+imageBTN_RET.pos_img.h)
                            s=1;
                        else 
                            s=0;
                        if (n==1)
                        {
                            if (image_BTN_SLIDER.pos_img.x>200 && image_BTN_SLIDER.pos_img.x<425 )
                            {
                                image_BTN_SLIDER.pos_img.x+=event.motion.xrel;
                                v+=event.motion.xrel;
                                Mix_VolumeMusic(v);
                                if (image_BTN_SLIDER.pos_img.x<=210)
                                    image_BTN_SLIDER.pos_img.x=210;
                                else if (image_BTN_SLIDER.pos_img.x>=420)
                                    image_BTN_SLIDER.pos_img.x=320;
                            }
                        }
                    }
                }
            }
        }

        SDL_Flip(screen);
    }

    
    liberer_image(imageBACK_2);
    //liberer_image(imageBACK_3);
    liberer_image(imageBTN1);
    liberer_image(imageBTN2);
    liberer_image(imageBTN3);
    liberer_image(imageBTN4);
    liberer_image(imageBTN1_act);
    liberer_image(imageBTN2_act);
    liberer_image(imageBTN3_act);
    liberer_image(imageBTN4_act);
    liberer_image(imageBTN_RET);
    liberer_image(imageBTN_RET_act);
    liberer_image(imageBTN_FULL);
    liberer_image(imageBTN_FULL_act);
    liberer_image(imageBTN_FULL_2);
    liberer_image(imageBTN_FULL_2_act);
    liberer_image(imageBTN_ON);
    liberer_image(imageBTN_OFF);
    liberer_image(image_SLIDER);
    liberer_image(image_BTN_SLIDER);

    liberer_musique(music);
    liberer_musiquebref(click);
    SDL_FreeSurface(screen);
    SDL_Quit();
    return EXIT_SUCCESS;
}
