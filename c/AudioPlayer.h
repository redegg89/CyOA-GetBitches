#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>

    int audio_rate = 44100;
    int audio_buffers = 4096;
    int audio_channels = 2;
    Mix_Chunk *sound = NULL;

void PlaySound(char file[], int isBGM, int track)
{
    SDL_Init(SDL_INIT_AUDIO);
    Mix_OpenAudio(audio_rate, AUDIO_S16, audio_channels, audio_buffers);
    sound = Mix_LoadWAV(file); //Loads WAV file from first argument
    int channel;
    channel = Mix_PlayChannel(track, sound, isBGM); //Plays the sound defined above on the channel specified (-1 is first non-playing track), with second argument being used for looping the audio
}

void FreeSound(){
    Mix_FreeChunk(sound);
    Mix_CloseAudio();
    SDL_Quit();
}