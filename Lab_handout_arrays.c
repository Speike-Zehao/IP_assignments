//
// Created by jiazehao on 2020/11/25.

#include "stdio.h"
#include "Lab_handout_arrays.h"

int gameboard_array[3][3]={0,0,0,0,0,0,0,0,0};
int input;
int order_true;
int input_storage[8];

int order_in_c[9]={7,8,9,4,5,6,1,2,3};


//---------------------------------------------FUNCTIONS-----------------------------------------------------
//---------------------------------------------FUNCTIONS-----------------------------------------------------
//---------------------------------------------FUNCTIONS-----------------------------------------------------
//---------------------------------------------FUNCTIONS-----------------------------------------------------

int check_and_store_input(int a){ // a is 'i' in gameboard.
    for (int j = 0; j < a; ++j) {
        if (input==input_storage[a]){
            printf("Warning:You choose an existing position!");
          //  printf(" 不讲武德，还想玩游戏！ "); //打印中文字，"前后都要加空格或其他英文字符。
            //printf(" 重来！ ");

            return 1;
        }
    }
    input_storage[a]=input;
    return 0;
}//If input already exists,return 1;Else store the input.

void translate_in_c(){
    order_true=order_in_c[input];
}

void translate_in_b(){
    order_true=input+1;
}

void clear_screen(){
    printf("\n\n\n");
}

void print_gameboard(){
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j) {
           if (gameboard_array[i][j] == 0) printf(". ");
           else printf("X ");
        }
        printf("\n");
    }
}

void gameboard_a(){
    int length,width;
    for (int i = 0; i < 9; ++i) {

        printf("Please input the places you choose.\n");
        printf("You choose:");
        scanf_s("%d",&input);
        clear_screen();
        if (check_and_store_input(i)==1) --i;//Check and store input;

        length = (int)(input/3);
        width = input%3;
        gameboard_array[length][width]=1;
        printf("Now the gameboard is:\n");
        print_gameboard();
    }
//For task (a)
}
void gameboard_b(){
    int length,width;
    for (int i = 0; i < 9; ++i) {

        printf("Please input the places you choose.\n");
        printf("You choose:");
        scanf_s("%d",&input);
        clear_screen();
        if (check_and_store_input(i)==1) --i;//Check and store input;

        translate_in_b();
        length = (int)(order_true/3);
        width = order_true%3;
        gameboard_array[length][width]=1;
        printf("Now the gameboard is:\n");
        print_gameboard();
    }
//For task(b);
}
void gameboard_c(){
    int length,width;
    for (int i = 0; i < 9; ++i) {

        printf("Please input the places you choose.\n");
        printf("You choose:");
        scanf_s("%d",&input);
        clear_screen();
        if (check_and_store_input(i)==1) --i;//Check and store input;

        translate_in_c();

        length = (int)(order_true/3);
        width = order_true%3;
        gameboard_array[length][width]=1;
        printf("Now the gameboard is:\n");
        print_gameboard();
    }

}

/*int order[9]={7,8,9,4,5,6,1,2,3};
 * 比如你这里输入一个n，我们记作input
 * 转换一下，order_in_3=order[input];
 * 这个时候你输入7，order_in_3就是1
 * 然后你就可以用mobile的码了
*/

