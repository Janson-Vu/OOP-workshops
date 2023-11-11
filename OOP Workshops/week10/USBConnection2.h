#pragma once
#include <stack>

class USBConnection2{
    private:
        int _id;
        USBConnection2(int latest_id){
            _id = latest_id;
        }
        static std::stack<int> ids; // stack should only have 3 elements

    public:
        static USBConnection2* CreateUsbConnection(){
            // if there are more than 3 ports available (strange cz we only have 3 ports for the computer)
            if (ids.size() > 3){
                return nullptr;
            }
            // if there are still ports available
            if (ids.size() > 0 && ids.size() <=3){
                USBConnection2* new_port = new USBConnection2(ids.top());
                ids.pop();
                return new_port;
            }
            // if computer has no port at all
            return nullptr;
        }

        int get_id(){
            return _id;
        }

        ~USBConnection2(){
            ids.push(_id);
        }

};