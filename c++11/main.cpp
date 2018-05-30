//
//  main.cpp
//  c++11
//
//  Created by 辛卓昆 on 16/5/9.
//  Copyright © 2016年 辛卓昆. All rights reserved.

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    /*
    float fv1 = 20;
    float fv2 = 20.3;
    float fv3 = 20.5;
    
    double dv1 = 20;
    double dv2 = 20.3;
    double dv3 = 20.5;
    
    cout << ((fv1 == dv1) ? "true" : "false") << endl;
    cout << ((fv2 == dv2) ? "true" : "false") << endl;
    cout << ((fv3 == dv3) ? "true" : "false") << endl;
    
    int num[4] = {};
    cout << sizeof num / sizeof(int) << endl;
    
    char str1[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
    cout << str1+4 << endl;
    
    cout << strlen(str1) << endl;
    
    string str1 = "abcd";
    string str2 = str1;
    cout << str2 << endl;
    
    str1[1] = 'e';
    cout << str1 << endl;
    cout << str2 << endl;
    */
    enum color1{
        red1 = 0,
        green1 = 0,
        blue1 = 0
    };
    enum color2{
        red2,
        green2,
        blue2
    };
    cout  << red1 << endl;
    cout  << green1 << endl;
    cout  << blue1 << endl;
    enum class color3:int8_t{ red, green = 2, blue  , black = 2 };
    cout << (int)color3::red << endl;
    cout << (int)color3::green << endl;
    cout << (int)color3::blue << endl;
    cout << (int)color3::black << endl;
    
    //cout << (int)color3::blue << endl;
    
    
    
    
    return 0;
}
