#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024

#define MSG_START "#START"
#define MSG_TURN "#TURN"
#define MSG_EXCEED "#EXCEED"
#define MSG_OTHER "#OTHER"
#define MSG_WIN "#WIN"
#define MSG_LOSE "#LOSE"
#define MSG_TIE "#TIE"

void error_handling(char *message);