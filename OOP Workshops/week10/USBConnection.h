#pragma once
#include <stack>
#include <iostream>

class USBConnection{
    private:
        int _id;
        USBConnection(int latest_id){
            _id = latest_id;
        }
        static std::stack<int> ids;

    public:
        static USBConnection* CreateUsbConnection(){
            // if there more than 3 ports available (strange cz computer only has 3 ports)
            if (ids.size()>3){
                return nullptr;
            }
            
            // if there are available ports
            if (ids.size()>0){
                USBConnection * new_port = new USBConnection(ids.top()); // top returns latest value
                ids.pop(); // take out the latest value
                return new_port;
            }
            // if there are no ports available at all
            return nullptr;
        
        }

        int get_id(){
            return _id;
        }

        ~USBConnection(){
            ids.push(_id);    
        }

};