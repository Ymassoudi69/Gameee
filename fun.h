#ifndef FONCTION_H
#define FONCTION_H

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

#define SCREEN_H 1440
#define SCREEN_W 803
typedef struct
{
    SDL_Surface *background[2]; /*!< initialisation le nbr de background .*/
    SDL_Surface *img; /*!<initialisatio of img.*/
    SDL_Rect posback; /*!<pos background.*/
    SDL_Rect posimg;/*!<pos img of background.*/
    SDL_Rect poscam;/*!<pos cam 1.*/
    SDL_Rect poscam2; /*!<post cam2.*/
    Mix_Music *music;/*!<initialistaion of musix.*/
    int anim_counter;/*!<counter of the current frame to make animation.*/
} back;

/**
* @struct Personne
* @brief struct for Personne
*/
typedef struct
{
    	char *url; /*!< Chaine : nom du photo*/
    	int num_i;
    	SDL_Rect pos1; /*!< Rectangle def la pos du perso*/
    	SDL_Rect pos2; /*!< Rectangle def la pos du perso*/
    	SDL_Surface *img; /*!< Surface de l'image */
	int vie; /*!< valeur de vie */
	int score; /*!< valeur de score */
    	double vitesse; /*!< valeur de vitesse */
	double acceleration; /*!< valeur de acceleration*/
	int up; /*!< valeur de saut */
	int move_direction; /*!< valeur de direction */
} Personne;
typedef struct
{
    char *url;
    SDL_Rect pos_img;
    SDL_Surface *img;
} image;

typedef struct
{
    SDL_Surface *txt;
    SDL_Rect pos_txt;
    SDL_Color color_txt;
    TTF_Font *police;
} texte;

void initialiser_imageBACK(image *imge);
void initialiser_imageBACK_2(image *imge);
void initialiser_imageBACK_3(image *imge);
void initialiser_imageBOUTON1(image *imgbtn);
void initialiser_imageBOUTON2(image *imgbtn);
void initialiser_imageBOUTON3(image *imgbtn);
void initialiser_imageBOUTON4(image *imgbtn);
void initialiser_imageBOUTON1_act(image *imgbtn);
void initialiser_imageBOUTON2_act(image *imgbtn);
void initialiser_imageBOUTON3_act(image *imgbtn);
void initialiser_imageBOUTON4_act(image *imgbtn);
void initialiser_btn_retour(image *imgbtn);
void initialiser_btn_retour_act(image *imgbtn);
void initialiser_btn_full(image *imgbtn);
void initialiser_btn_full_act(image *imgbtn);
void initialiser_btn_full_2(image *imgbtn);
void initialiser_btn_full_2_act(image *imgbtn);
void initialiser_btn_on(image *imgbtn);
void initialiser_btn_off(image *imgbtn);
void initialiser_vol_slider(image *imgbtn);
void initialiser_vol_btn(image *imgbtn);

void initialiser_audio(Mix_Music *music);
void initialiser_audiobref(Mix_Chunk *music);

void afficher_image(SDL_Surface *screen, image imge);

void liberer_image(image imge);
void liberer_musiquebref(Mix_Chunk *music);
void liberer_musique(Mix_Music *music);
void initPerso(Personne *p);
void initPerso_animated(Personne *p[],int num_i);
void afficherPerso(Personne p, SDL_Surface *screen);
void movePerso(Personne *p, Uint32 dt);
void saut(Personne *p, Uint32 dt, int posinit);

void init_back(back *b);
void affich_back(back *b, SDL_Surface *screen);
void scroll(back *b, int input);
void LibererBack(back b);

void initPerso2(Personne *p2);
void initPerso_animated2(Personne *p2[],int num_i);
void afficherPerso2(Personne p2, SDL_Surface *screen);
void movePerso2(Personne *p2, Uint32 dt);
void saut2(Personne *p2, Uint32 dt, int posinit);


#endif
