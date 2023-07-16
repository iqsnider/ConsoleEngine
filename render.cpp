#include <iostream>


int main(){

    int frame_height = 40;
    int frame_width = 100;

    //define x scale (basically: how much zoom? set to frame sizes for 1x zoom):
    int e_1_scale = frame_width;
    //define y scale:
    int e_2_scale = frame_height;

    //define graph tick mark scale (range of values shown on screen):
    double e_1tick_scale = 20;
    double e_2tick_scale = 17;

    double graph_height = frame_height/(e_2_scale/(e_2tick_scale));
    double graph_width = frame_width/(e_1_scale/(e_1tick_scale));

    


    std::cout << "hello" << std::endl;
}