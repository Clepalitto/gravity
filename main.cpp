#include <iostream>
#include <math.h>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    string ver = "0.1.0 (beta)";
    cout << "" << endl;
    cout << "Gravity - the physics calculator" << endl;
    cout << "" << endl;
    cout << "Type help to see the list of commands" << endl;
    while(true){
        cout << " >> ";
        string op;
        cin >> op;
        if(op == "help"){
            cout << "Commands : " << endl;
            cout << "" << endl;
            cout << "help              print this help message" << endl;
            cout << "gravity           calculate force of object a on b in Newtons" << endl;
            cout << "speed             calculate speed from distance and time in m/s" << endl;
            cout << "distance          calculate distance from speed and time in meters" << endl;
            cout << "time              calculate time from speed and distance in seconds" << endl;
            cout << "speed-conv        convert speeds" << endl;
            cout << "time-conv         convert time" << endl;
            cout << "windchill         calculate wind chill from temp and wind speed" << endl;
            cout << "area              calculate area" << endl;
            cout << "vol               calculate volume" << endl;
            cout << "quit              quit Gravity" << endl;
            cout << "log               log and powers" << endl;
            cout << "version           version of Gravity" << endl;
            cout << "" << endl;
        }
        if(op == "gravity"){
            cout << "Mass of object a (in kg) : " ;
            double ma;
            cin >> ma;
            cout << "Mass of object b (in kg) : " ;
            double mb;
            cin >> mb;
            cout << "Distance between object a and b (in meters) : " ;
            double d;
            cin >> d;
            double grv = 0.0000000000667*((ma*mb)/d*d);
            cout << "The force that applies a on b and b on a is of " << grv << "N." << endl;
        }
        if(op == "speed"){
            cout << "Distance (in meters): " ;
            double dist;
            cin >> dist;
            cout << "Time (in seconds. To turn hours into seconds, time it by 3600) : " ;
            double t;
            cin >> t;
            double s = dist/t;
            double dist_km = dist/1000;
            double t_hour = t/3600;
            double s_km = dist_km/t_hour;
            cout << "Average speed is " << s << "m/s = " << s_km << "km/h." << endl;
        }
        if(op == "distance"){
            cout << "Speed (in m/s): " ;
            double s;
            cin >> s;
            cout << "Time (in seconds. To turn hours into seconds, time it by 3600) : " ;
            double t;
            cin >> t;
            double dist = s*t;
            double dist_km = dist/1000;
            cout << "Distance is " << dist << "m = " << dist_km << "km." << endl;
        }
        if(op == "time"){
            cout << "Speed (in m/s): " ;
            double s;
            cin >> s;
            cout << "Distance (in meters)" ;
            double dist;
            cin >> dist;
            double t = dist/s;
            double t_hour = t/3600;
            double t_min = t/60;
            cout << "Time is " << t << "s = " << t_min << "min = " << t_hour << "h." << endl;
        }
        if(op == "speed-conv"){
            cout << "m/s to km/h (a), Km/h to m/s (b), kn to km/h (c), km/h to kn (d): ";
            string conv;
            cin >> conv;
            if(conv == "a"){
                // m/s to km/h
                cout << "Speed (in m/s) : " ;
                double met;
                cin >> met;
                double mtkm = (met/1000)*3600;
                cout << met << " m/s = " << mtkm << " km/h. " << endl;
            }
            if(conv == "b"){
                // km/h to m/s
                cout << "speed (in km/h) : " ;
                double km;
                cin >> km;
                double kmtm = (km*1000)/3600;
                cout << km << " km/h = " << kmtm << " m/s. " << endl;
            }
            if(conv == "c"){
                // knots to km/h
                cout << "speed (in kn) : " ;
                double kn;
                cin >> kn;
                double kntm = kn*1.852;
                cout << kn << " kn = " << kntm << " km/h. " << endl;
            }
            if(conv == "d"){
                // km/h to knots
                cout << "speed (in km/h) : " ;
                double km;
                cin >> km;
                double kmtkn = km/1.852;
                cout << km << " km/h = " << kmtkn << " kn. " << endl;
            }
        }
        if(op == "time-conv"){
            cout << "Seconds to Hours (a), or Hours to seconds (b), Seconds to minute (c), Minutes to Seconds (d)";
            string tconv;
            cin >> tconv;
            if(tconv == "a"){
                cout << "Seconds : ";
                double secs;
                cin >> secs;
                double sth = secs/3600;
                cout << secs << "s = " << sth << "h." << endl;
            }
            if(tconv == "b"){
                cout << "Hours : ";
                double hr;
                cin >> hr;
                double hts = hr*3600;
                cout << hr << "h = " << hts << "s." << endl;
            }
            if(tconv == "c"){
                cout << "Seconds : ";
                double sc;
                cin >> sc;
                double scm = sc/60;
                cout << sc << "s = " << scm << "min ." << endl;
            }
            if(tconv == "d"){
                cout << "Minutes : ";
                double mn;
                cin >> mn;
                double mns = mn*60;
                cout << mn << "min = " << mns << "s." << endl;
            }
        }
        if(op == "quit"){
            break;
        }
        if(op == "windchill"){
            cout << "Temperature (in °C)" ;
            double temp;
            cin>>temp;
            cout << "Wind speed (in km/h)" ;
            double speed;
            cin>>speed;
            double pw = pow(speed, 0.16);
            double wc = 13.12+(0.6215*temp)+((0.3965*temp)-11.37)*pw;
            cout << "Wind chill for " << temp << "°C and " << speed << " km/h of wind is : " << wc << "." << endl;
        }
        if(op == "area"){
            cout << "Rectangle (a), circle (b), triangle (c)" << endl;
            string shape;
            cin >> shape;
            if(shape == "a"){
                cout << "Width (cm):" ;
                double w;
                cin >> w;
                cout << "Height (cm):" ;
                double h;
                cin >> h;
                double area = w*h;
                cout << "Area of rectangle is : " << area << "cm²." << endl;
            }
            if(shape == "b"){
                cout << "Diameter (cm)" ;
                double d;
                cin>>d;
                double area = d*M_PI;
                cout << "Area of circle is : " << area << "cm²." << endl;
            }
            if(shape == "c"){
                cout << "Base length (cm):" ;
                double w;
                cin >> w;
                cout << "Height (cm) (You don't know the height ? Type 0):" ;
                double h;
                cin >> h;
                if(h == 0){
                    cout << "Side a : " ;
                    double sa;
                    cin >> sa;
                    cout << "Side b : " ;
                    double sb;
                    cin >> sb;
                    double p = (w+sa+sb)/2;
                    double are = sqrt(p*(p-w)*(p-sa)*(p-sb));
                    cout << "Area of triangle is : " << are << " cm3." << endl;
                }
                double area = (w*h)/2;
                cout << "Area of triangle is : " << area << "cm²." << endl;
            }
        }
        if(op == "vol"){
            cout << "Cube (a), sphere (b), cylinder (c), Cone (d)" << endl;
            string shape;
            cin >> shape;
            if(shape == "a"){
                cout << "Width (cm):" ;
                double w;
                cin >> w;
                cout << "Height (cm):" ;
                double h;
                cin >> h;
                cout << "Length (cm):" ;
                double l;
                cin >> l;
                double vol = w*h*l;
                cout << "Volume of rectangle is : " << vol << "cm3." << endl;
            }
            if(shape == "b"){
                cout << "Diameter (cm)" ;
                double d;
                cin>>d;
                double r = d/2;
                double pw = pow(r, 3);
                double vol = (4/3)*(M_PI*pw);
                cout << "Volume of sphere is : " << vol << "cm3." << endl;
            }
            if(shape == "c"){
                cout << "Diameter (cm):" ;
                double d;
                cin >> d;
                cout << "Height (cm):" ;
                double h;
                cin >> h;
                double vol = (d*M_PI)*h;
                cout << "Volume of cylinder is : " << vol << "cm3." << endl;
            }
            if(shape == "d"){
                cout << "Diameter of base : " ;
                double d;
                cin >> d;
                d /= 2;
                cout << "Height : " ;
                double h;
                cin >> h;
                double v = ((M_PI*pow(d, 2))+(3*h));
                cout << "Volume of cone is " << v << " u3." << endl;
            }
        }
        if(op == "log"){
            cout << "Power (a), Log (b), Natural log (c), Decimal log (d), Binary log (e)" ;
            string mode;
            cin >> mode;
            if(mode == "a"){
                    cout << "Base : " ;
                    double base;
                    cin >> base;
                    cout << "Power : " ;
                    double pw;
                    cin >> pw;
                    double rs = pow(base, pw);
                    cout << base << " to the power of " << pw << " = " << rs << endl;
            }
            if(mode == "b"){
                cout << "Base : " ;
                double base;
                cin >> base;
                cout << "Result : " ;
                double res;
                cin >> res;
                double lg = (log10(res)/log10(base));
                cout << "log " << base << " of " << res << " = " << lg << endl;
            }
            if(mode == "c"){
                cout << "Base : " ;
                double b;
                cin >> b;
                double lnr = log(b);
                cout << "Result = " << lnr << endl;
            }
            if(mode == "d"){
                cout << "Base : " ;
                double b;
                cin >> b;
                double ld = log10(b);
                cout << "Result : " << ld << endl;
            }
            if(mode == "e"){
                cout << "Base : " ;
                double b;
                cin >> b;
                double lb = log2(b);
                cout << "Result : " << lb << endl;
            }
        }
        if(op == "version"){
            cout << "Gravity version " << ver << endl;
        }
    }
    return 0;
}
