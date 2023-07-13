#ifndef _GAME_H_
#define _GAME_H_

#include <iostream>
#include <SDL2/SDL.h>

#include "screens.h"
#include "models.h"
#include "WG_filezilla.h"

using std::string;

class Game
{
    private:
        int score;
        int attempts;
        int lives;
        int wordCount;
        string level;
        string playerName;
        string hiddenWord;

        Filezilla<Model_Word> Words;
        Filezilla<Model_Players> Players;
        Filezilla<Model_Settings> Settings;
        Filezilla<Model_Game_Data> GameData;

        int windowHeight;
        int windowWidth;
        int activePage;
        Screens pages;
        bool isRunning;
        int loading;
        bool loaded;

        SDL_Window* window;
        SDL_Surface* surface;
        SDL_Renderer* renderer;
    
    public:
        Game(void);
        int onExecute(void);
        bool onInit(void);
        void onEvent(SDL_Event* event);
        bool onRender(void);
        void onLoop(void);
        void onCleanup(void);
};

#endif