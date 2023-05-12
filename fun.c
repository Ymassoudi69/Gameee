#include "fun.h"

void initialiser_imageBACK(image *imge)
{
    imge->url = ".//menu final/validation menu/background_menu.png";
    imge->pos_img.x = 0;
    imge->pos_img.y = 0;
    imge->pos_img.w = 0;
    imge->pos_img.h = 0;
    imge->img = IMG_Load(imge->url);
}
void initialiser_imageBACK_2(image *imge)
{
    imge->url = ".//menu final/validation settings/back_settings.png";
    imge->pos_img.x = 0;
    imge->pos_img.y = 0;
    imge->pos_img.w = 0;
    imge->pos_img.h = 0;
    imge->img = IMG_Load(imge->url);
}
void initialiser_imageBACK_3(image *imge)
{
    imge->url = "./SOON.png";
    imge->pos_img.x = 0;
    imge->pos_img.y = 0;
    imge->pos_img.w = 0;
    imge->pos_img.h = 0;
    imge->img = IMG_Load(imge->url);
}
void initialiser_imageBOUTON1(image *imgbtn)
{
    imgbtn->url = "./menu final/validation menu/bouton menu/play.png";
    imgbtn->pos_img.x = 10;
    imgbtn->pos_img.y = 110+160;
    imgbtn->pos_img.w = 490;
    imgbtn->pos_img.h = 110;
    imgbtn->img = IMG_Load(imgbtn->url);
}
void initialiser_imageBOUTON2(image *imgbtn)
{
    imgbtn->url = "./settings (1).png";
    imgbtn->pos_img.x = 10;
    imgbtn->pos_img.y = 220+160;
    imgbtn->pos_img.w = 490;
    imgbtn->pos_img.h = 110;
    imgbtn->img = IMG_Load(imgbtn->url);
}
void initialiser_imageBOUTON3(image *imgbtn)
{
    imgbtn->url = "./menu final/validation menu/bouton menu/resume.png";
    imgbtn->pos_img.x = 10;
    imgbtn->pos_img.y = 330+160;
    imgbtn->pos_img.w = 490;
    imgbtn->pos_img.h = 110;
    imgbtn->img = IMG_Load(imgbtn->url);
}
void initialiser_imageBOUTON4(image *imgbtn)
{
    imgbtn->url = "./menu final/validation menu/bouton menu/exit.png";
    imgbtn->pos_img.x = 10;
    imgbtn->pos_img.y = 440+160;
    imgbtn->pos_img.w = 490;
    imgbtn->pos_img.h = 110;
    imgbtn->img = IMG_Load(imgbtn->url);
}
void initialiser_imageBOUTON1_act(image *imgbtn)
{
    imgbtn->url = ".//menu final/validation menu/bouton menu/play1.png";
    imgbtn->pos_img.x = 10;
    imgbtn->pos_img.y = 110+160;
    imgbtn->pos_img.w = 490;
    imgbtn->pos_img.h = 110;
    imgbtn->img = IMG_Load(imgbtn->url);
}
void initialiser_imageBOUTON2_act(image *imgbtn)
{
    imgbtn->url = ".//settings1.png";
   imgbtn->pos_img.x = 10;
    imgbtn->pos_img.y = 220+160;
    imgbtn->pos_img.w = 490;
    imgbtn->pos_img.h = 110;
    imgbtn->img = IMG_Load(imgbtn->url);
}
void initialiser_imageBOUTON3_act(image *imgbtn)
{
    imgbtn->url = ".//menu final/validation menu/bouton menu/resume1.png";
    imgbtn->pos_img.x = 10;
    imgbtn->pos_img.y = 330+160;
    imgbtn->pos_img.w = 490;
    imgbtn->pos_img.h = 110;
    imgbtn->img = IMG_Load(imgbtn->url);
}
void initialiser_imageBOUTON4_act(image *imgbtn)
{
    imgbtn->url = ".//menu final/validation menu/bouton menu/exit1.png";
    imgbtn->pos_img.x = 10;
    imgbtn->pos_img.y = 440+160;
    imgbtn->pos_img.w = 490;
    imgbtn->pos_img.h = 110;
    imgbtn->img = IMG_Load(imgbtn->url);
}
void initialiser_btn_retour(image *imgbtn)
{
    imgbtn->url = ".//menu final/validation settings/bouton_settings/return.png";
    imgbtn->pos_img.x = 10;
    imgbtn->pos_img.y = 560+160;
    imgbtn->pos_img.w = 85;
    imgbtn->pos_img.h = 60;
    imgbtn->img = IMG_Load(imgbtn->url);
}
void initialiser_btn_retour_act(image *imgbtn)
{
    imgbtn->url = ".//menu final/validation settings/bouton_settings/return1.png";
    imgbtn->pos_img.x = 10;
    imgbtn->pos_img.y = 560+160;
    imgbtn->pos_img.w = 85;
    imgbtn->pos_img.h = 60;
    imgbtn->img = IMG_Load(imgbtn->url);
}
void initialiser_btn_full(image *imgbtn)
{
    imgbtn->url = ".//menu final/validation settings/bouton_settings/fullscreen.png";
    imgbtn->pos_img.x = 640;
    imgbtn->pos_img.y = 625;
    imgbtn->pos_img.w = 65;
    imgbtn->pos_img.h = 55;
    imgbtn->img = IMG_Load(imgbtn->url);
}
void initialiser_btn_full_act(image *imgbtn)
{
    imgbtn->url = ".//menu final/validation settings/bouton_settings/fullscreen1.png";
    imgbtn->pos_img.x = 640;
    imgbtn->pos_img.y = 625;
    imgbtn->pos_img.w = 65;
    imgbtn->pos_img.h = 55;
    imgbtn->img = IMG_Load(imgbtn->url);
}
void initialiser_btn_full_2(image *imgbtn)
{
    imgbtn->url = ".//menu final/validation settings/bouton_settings/normalscreen.png";
    imgbtn->pos_img.x = 630+230;
    imgbtn->pos_img.y = 625;
    imgbtn->pos_img.w = 65;
    imgbtn->pos_img.h = 55;
    imgbtn->img = IMG_Load(imgbtn->url);
}
void initialiser_btn_full_2_act(image *imgbtn)
{
    imgbtn->url = ".//menu final/validation settings/bouton_settings/normalscreen1.png";
    imgbtn->pos_img.x = 630+230;
    imgbtn->pos_img.y = 625;
    imgbtn->pos_img.w = 65;
    imgbtn->pos_img.h = 55;
    imgbtn->img = IMG_Load(imgbtn->url);
}
void initialiser_btn_on(image *imgbtn)
{
    imgbtn->url = ".//menu final/validation settings/bouton_settings/volume_on.png";
     imgbtn->pos_img.x = 20;
    imgbtn->pos_img.y = 310;
    imgbtn->pos_img.w = 490;
    imgbtn->pos_img.h = 110;
    imgbtn->img = IMG_Load(imgbtn->url);
}
void initialiser_btn_off(image *imgbtn)
{
    imgbtn->url = ".//menu final/validation settings/bouton_settings/volume_off.png";
    imgbtn->pos_img.x = 210;
    imgbtn->pos_img.y = 310;
    imgbtn->pos_img.w = 80;
    imgbtn->pos_img.h = 50;
    imgbtn->img = IMG_Load(imgbtn->url);
}
void initialiser_vol_slider(image *imgbtn)
{
    imgbtn->url = ".//menu final/validation settings/bouton_settings/slide.png";
    imgbtn->pos_img.x = 210;
    imgbtn->pos_img.y = 380;
    imgbtn->pos_img.w = 300;
    imgbtn->pos_img.h = 40;
    imgbtn->img = IMG_Load(imgbtn->url);
}
void initialiser_vol_btn(image *imgbtn)
{
    imgbtn->url = ".//Btn_vol.png";
    imgbtn->pos_img.x = 212;
    imgbtn->pos_img.y = 378;
    imgbtn->pos_img.w = 40;
    imgbtn->pos_img.h = 40;
    imgbtn->img = IMG_Load(imgbtn->url);
}
void initialiser_audio(Mix_Music *music)
{
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024);
    music = Mix_LoadMUS("./Music_Menu.mp3");

    if (music == NULL)
    {
        fprintf(stderr, "Impossible de charger la musique %s\n", Mix_GetError());
        exit(EXIT_FAILURE);
    }

    Mix_PlayMusic(music, -1);
}
void initialiser_audiobref(Mix_Chunk *music)
{
    Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,2,2024);
	music=Mix_LoadWAV("./Mouse_Click.wav");
	Mix_PlayChannel(-1, music, 0);
	if(music==NULL)
		printf("%s",SDL_GetError());
}

void afficher_image(SDL_Surface *screen, image imge)
{
    SDL_BlitSurface(imge.img, NULL, screen, &imge.pos_img);
}



void liberer_image(image imge)
{
    SDL_FreeSurface(imge.img);
}

void liberer_musique(Mix_Music *music)
{
    Mix_FreeMusic(music);
}

void liberer_musiquebref(Mix_Chunk *music)
{
    Mix_FreeChunk(music);
}
/**
* @file background and perso
* @brief Video Game Functions
* @author Youssef & Rayen 
* @V1.0
* @date May 11,2023
*
* Testing program for Personnage 
*
*/



/**
* @brief  init background 
* @param  back *b

* @return
*/
void init_back(back *b)
{
    b->background[0] = NULL;
    b->background[1] = NULL;
    b->background[0] = IMG_Load("mtar1.png");
    b->background[1] = IMG_Load("mtar2.png");
    b->poscam.x = 0;
    b->poscam.y = 0;
    b->poscam.w = 1920;
    b->poscam.h = 1080;

    b->poscam2.x = 0;
    b->poscam2.y = 0;
    b->poscam2.w = 1920;
    b->poscam2.h = 1080;
   
    b->posback.x = 0;
    b->posback.y = 0;

    b->anim_counter = 0;
}

/**
* @brief  Affichage de background
* @param  SDL_Surface *s
* @param  image *im

* @return
*/
void affich_back(back *b, SDL_Surface *screen)
{
    int current_frame = b->anim_counter / 5 % 2;
    //SDL_Rect top_screen = {0,0};
    //SDL_Rect bottom_screen = {0,570};

    SDL_BlitSurface(b->background[current_frame], &b->poscam, screen, NULL);
    //SDL_BlitSurface(b->background[current_frame], &b->poscam2, screen, &bottom_screen);
}

//***************************************************************************************************************************************

/**
* @brief  init du personnage 
* @param  Personne *p

* @return
*/
void initPerso(Personne *p)
{
 	p->url = (char*)malloc(sizeof(char) * 30);
	p->num_i=0;
 	sprintf(p->url, "person/1.png");
 	p->img=IMG_Load(p->url);
 	if(p->img==NULL)
 	{
    		printf("error can't Load IMG");
    		exit(1);
 	}
     	p->pos1.x=100;
     	p->pos1.y=355;
     	p->pos1.w=p->img->w;
     	p->pos1.h=p->img->h;
     	p->pos2.x=1920;
     	p->pos2.y=830;
     	p->pos2.w=p->img->w;
     	p->pos2.h=p->img->h;
     	p->vitesse=1; 
     	p->acceleration=0;
     	p->up=0;
}

/**
* @brief  init du animation du personnage
* @param  Personne *p[]
* @param  int num_i

* @return
*/
void initPerso_animated(Personne *p[], int num_i)
{
	int i; 
 	for(i=0;i<num_i;i++)
	{
 		p[i]->url = (char*)malloc(sizeof(char) * 30);
 		p[i]->num_i=i;
 		sprintf(p[i]->url, "person/%d.png", i);
 		p[i]->img=IMG_Load(p[i]->url);
 		if(p[i]->img==NULL)
 		{
    			printf("error can't Load IMG");
    			exit(1);
 		}
     		p[i]->pos1.x=100;
     		p[i]->pos1.y=355;
     		p[i]->pos1.w=p[i]->img->w;
     		p[i]->pos1.h=p[i]->img->h;
     		p[i]->pos2.x=0;
     		p[i]->pos2.y=0;
     		p[i]->pos2.w=p[i]->img->w;
     		p[i]->pos2.h=p[i]->img->h;
     		p[i]->vitesse=1; 
     		p[i]->acceleration=0;
     		p[i]->up=0;}
}

/**
* @brief  Affichage du personnage
* @param  Personne p
* @param  SDL_Surface *screen

* @return
*/
void afficherPerso(Personne p, SDL_Surface *screen)
{
    	SDL_BlitSurface(p.img, NULL, screen, &p.pos1);
}

/**
* @brief  Affichage animation personnage a droite
* @param  Personne *p

* @return
*/
void animerPersoD(Personne *p)
{
    	free(p->url);
    	p->num_i++;
    	if(p->num_i==9)
    	{
        	p->num_i=0;
    	}
 	p->url = (char*)malloc(sizeof(char) * 30);
 	sprintf(p->url,"person/D%d.png",p->num_i);
 	p->img=IMG_Load(p->url);
}

/**
* @brief  Affichage animation personnage a gauche
* @param  Personne *p

* @return
*/void animerPersoG(Personne *p)
{
    	free(p->url);
    	p->num_i++;
    	if(p->num_i==9)
    	{
        	p->num_i=0;
    	}
 	p->url = (char*)malloc(sizeof(char) * 30);
 	sprintf(p->url,"person/G%d.png",p->num_i);
 	p->img=IMG_Load(p->url);
}

/**
* @brief  Affichage animation personnage
* @param  Personne *p

* @return
*/
void animerPerso(Personne *p)
{
    	free(p->url);
    	p->num_i++;
    	if(p->num_i==9)
    	{
        	p->num_i=0;
    	}
 	p->url = (char*)malloc(sizeof(char) * 30);
 	sprintf(p->url,"person/%d.png",p->num_i);
 	p->img=IMG_Load(p->url);
}

/**
* @brief  mouvement du personnage 
* @param  Personne *p
* @param  Uint32 dt

* @return
*/
void movePerso(Personne *p, Uint32 dt)
{
    	double dx = 0.1 * p->acceleration * dt * dt + p->vitesse * dt;
	
	//while 	
	if(dx<=0)
    	{
     		dx=dx*(-1);
    	}
        if(p->move_direction==0)
	{
		animerPersoG(p);

                p->pos1.x-=dx;

        }
        else if(p->move_direction==1)
	{

            	animerPersoD(p);
                p->pos1.x+=dx;
	}
	else
	{
		animerPerso(p);
	}
}

/**
* @brief  saut du personnage 
* @param  Personne *p
* @param  Uint32 dt
* @param  int posinit

* @return
*/
void saut(Personne *p, Uint32 dt, int posinit)
{        
	double dx=0.5 * p->acceleration * dt * dt + p->vitesse * dt;        
	if(dx<0)
    		{ dx=dx*(-1); }
        if(p->pos1.y<=posinit-355)
         	{
			p->up=0; 
		}        
        if(p->up==1&&p->pos1.y>posinit-355)
  	      	{
				p->pos1.y-=dx;
		}
        else if(p->up==0&&p->pos1.y<posinit)
        	{
				p->pos1.y+=dx;
		}
}

//************************************************************************************************************************
//*************                                          2eme                                            *****************

/**
* @brief  init du personnage 2
* @param  Personne *p2

* @return
*/
void initPerso2(Personne *p2)
{
 	p2->url = (char*)malloc(sizeof(char) * 30);
	p2->num_i=0;
 	sprintf(p2->url, "person2/1.png");
 	p2->img=IMG_Load(p2->url);
 	if(p2->img==NULL)
 	{
    		printf("error can't Load IMG");
    		exit(1);
 	}
     	p2->pos1.x=100;
     	p2->pos1.y=355;
     	p2->pos1.w=p2->img->w;
     	p2->pos1.h=p2->img->h;
     	p2->pos2.x=0;
     	p2->pos2.y=0;
     	p2->pos2.w=p2->img->w;
     	p2->pos2.h=p2->img->h;
     	p2->vitesse=1; 
     	p2->acceleration=0;
     	p2->up=0;
}

/**
* @brief  init du animation du personnage 2
* @param  Personne *p2[]
* @param  int num_i

* @return
*/
void initPerso_animated2(Personne *p2[], int num_i)
{
	int i; 
 	for(i=0;i<num_i;i++)
	{
 		p2[i]->url = (char*)malloc(sizeof(char) * 30);
 		p2[i]->num_i=i;
 		sprintf(p2[i]->url, "person2/%d.png", i);
 		p2[i]->img=IMG_Load(p2[i]->url);
 		if(p2[i]->img==NULL)
 		{
    			printf("error can't Load IMG");
    			exit(1);
 		}
     		p2[i]->pos1.x=100;
     		p2[i]->pos1.y=355;
     		p2[i]->pos1.w=p2[i]->img->w;
     		p2[i]->pos1.h=p2[i]->img->h;
     		p2[i]->pos2.x=0;
     		p2[i]->pos2.y=0;
     		p2[i]->pos2.w=p2[i]->img->w;
     		p2[i]->pos2.h=p2[i]->img->h;
     		p2[i]->vitesse=1; 
     		p2[i]->acceleration=0;
     		p2[i]->up=0;}
}

/**
* @brief  Affichage du personnage 2
* @param  Personne p2
* @param  SDL_Surface *screen

* @return
*/
void afficherPerso2(Personne p2, SDL_Surface *screen)
{
    	SDL_BlitSurface(p2.img, NULL, screen, &p2.pos1);
}

void animerPersoD2(Personne *p2)
{
    	free(p2->url);
    	p2->num_i++;
    	if(p2->num_i==9)
    	{
        	p2->num_i=0;
    	}
 	p2->url = (char*)malloc(sizeof(char) * 30);
 	sprintf(p2->url,"person2/D%d.png",p2->num_i);
 	p2->img=IMG_Load(p2->url);
}

void animerPersoG2(Personne *p2)
{
    	free(p2->url);
    	p2->num_i++;
    	if(p2->num_i==9)
    	{
        	p2->num_i=0;
    	}
 	p2->url = (char*)malloc(sizeof(char) * 30);
 	sprintf(p2->url,"person2/G%d.png",p2->num_i);
 	p2->img=IMG_Load(p2->url);
}

void animerPerso2(Personne *p2)
{
    	free(p2->url);
    	p2->num_i++;
    	if(p2->num_i==9)
    	{
        	p2->num_i=0;
    	}
 	p2->url = (char*)malloc(sizeof(char) * 30);
 	sprintf(p2->url,"person2/%d.png",p2->num_i);
 	p2->img=IMG_Load(p2->url);
}

void movePerso2(Personne *p2, Uint32 dt)
{
    	double dx = 0.1 * p2->acceleration * dt * dt + p2->vitesse * dt;
    	if(dx<0)
    	{
     		dx=dx*(-1);
    	}
        if(p2->move_direction==0)
	{
		animerPersoG2(p2);
                p2->pos1.x-=2;

        }
        else if(p2->move_direction==1)
	{
            	animerPersoD2(p2);
                p2->pos1.x+=2;
	}
	else
	{
		animerPerso2(p2);
	}
}

void saut2(Personne *p2, Uint32 dt, int posinit)
{        
	double dx=0.5 * p2->acceleration * dt * dt + p2->vitesse * dt;        
	if(dx<0)
    		{ dx=dx*(-1); }
        if(p2->pos1.y<=posinit-355)
         	{
			p2->up=0; 
		}        
        if(p2->up==1&&p2->pos1.y>posinit-355)
  	      	{ p2->pos1.y-=dx; }
        else if(p2->up==0&&p2->pos1.y<posinit)
        	{
				p2->pos1.y+=dx;
		}
}
void scroll(back *b,int input)
 
{
int dx;
 
if(	input==4 && b->poscam.y>-40 )
 
	b->poscam.y-=2;
 
if(	input==3 && b->poscam.y<0)
 
	b->poscam.y+=2;
 
if(	input==1&& b->poscam.x<8277-1920)
 
	b->poscam.x+=15;

 
if(	input==2&& b->poscam.x>0)
 
	b->poscam.x-=15;
 
}

//************************************************************************************************************************
