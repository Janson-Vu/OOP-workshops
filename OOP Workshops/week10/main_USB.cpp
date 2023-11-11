#include <iostream>
#include <stack> //for list of ids
using namespace std;

#include "USBConnection2.h"
stack<int> USBConnection2::ids({3, 2, 1});

int main(){
    
    int max_usb_ports = 10;
    USBConnection2* c[max_usb_ports];
    for(int i=0;i<max_usb_ports;i++){
        // CreateUsbConnection is a static function
        // it creates a new object of USBConnection ...
        // if a port is available
        c[i] = USBConnection2::CreateUsbConnection();
        if (c[i] != nullptr){
            cout << "USB connection with ID =" << c[i]->get_id() << " was created\n";
        }else{
            cout << "no more USB ports available\n";
        }
    }
    // let's unplug one use connection
    delete c[1];
    // this should return ID 2 to the stack.

    USBConnection2* a = USBConnection2::CreateUsbConnection();
    if (a != nullptr){
            cout << "USB connection with ID =" << a->get_id() << " was created\n";
    } else {
            cout << "no more USB ports available\n";
    }


    return 0;
}