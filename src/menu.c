#include "raylib.h"
#include <stdbool.h>


void createDrawRec(int left, int top);
void MENU_GAME(void)
{

     bool isInMenu = true;

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update here
        if(isInMenu)
        {
            if(IsKeyPressed(KEY_Q)) isInMenu = false;
        }
        else
        {
            if(IsKeyPressed(KEY_W)) isInMenu = true;
        }

        // Draw here
        BeginDrawing();
        if(isInMenu)
        {
            ClearBackground(BLACK);
            DrawRectangle(300,195,1000,50,DARKGREEN);
            DrawRectangle(300,247,1000,45,WHITE);
            DrawRectangleLines(300,195,1000,95,WHITE);
            DrawText("JIR Gaming",575, 222, 50, BLACK);
            DrawText("press any key",640,300, 20, LIGHTGRAY);
            DrawText("Exit",700, 350, 20, LIGHTGRAY);
            DrawRectangle(100,520,1200,50,DARKGREEN);
            DrawRectangle(100,570,1200,50,WHITE);
            DrawRectangleLines(100,520,1200,100,WHITE);
            DrawRectangleLines(150,540,55,55,BLACK);
            DrawRectangleLines(250,540,55,55,BLACK);
            DrawRectangleLines(350,540,55,55,BLACK);
            DrawRectangleLines(450,540,55,55,BLACK);
            DrawText("Selecione seus Itens",150,600, 20, BLUE);
            DrawCircleGradient(620, 312, 10, DARKGREEN, BLACK);
            DrawEllipse(1125, 570, 62, 40, DARKCARY);
            DrawText("Menu",1075, 550, 40, BLACK);


        }
        else
        {
            ClearBackground(RAYWHITE);
            DrawText("Congrats! You created your firstwindow!", 190, 200, 50, LIGHTGRAY);
        }

        EndDrawing();

    }
}
void createDrawRec(int left, int top){

       int height = 10,width = 10;
       DrawRectangle(left,top,width,height,BLUE);


}
