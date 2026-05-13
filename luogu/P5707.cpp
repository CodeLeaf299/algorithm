#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,v;
    cin >> s>>v;
    int hour,minute;
    minute = (s+v-1)/v + 10;//总共的minute向上取整
    int eight_minute = 480;
    //一天有24*60=1440min;
     //是担心minute超过480h
    int road_time ;
    road_time = (480-minute + 1440)%1440;
    //现在 算小时
    int minute_1;
    minute_1 = road_time % 60;
    hour = road_time/60;

    if (hour < 10) cout << "0";
    cout << hour << ":";
	
    if (minute_1 <10)cout << "0";
    cout << minute_1;
        
    return 0;
}