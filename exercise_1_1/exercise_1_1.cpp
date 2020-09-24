//Do not edit the next 4 lines
#include <iostream>
#include <vector>

int main() {
	std::cout << "Use the wasd keys and enter to input a direction, or the E key to stop" << std::endl;

    // Write your code for step 1 here
    std::vector<float> wheel_speeds (4);
    // Write your code for step 2 here
    std::vector<float>::size_type size = wheel_speeds.size();
    for (unsigned i = 0; i < size; i++) wheel_speeds[i]=0;
    // Do not edit the next 5 lines
    bool keep_going = true;
    char direction;

    while (keep_going) {
        std::cin >> direction; //At the begining of every iteration look for an input from the user
        // Write rest of code here (within while loop)
        if (direction == 'w') {
            for (unsigned i = 0; i < size; i++) wheel_speeds[i]=1;
        }
        else if (direction == 'a') {
            for (unsigned i = 0; i < size; i++) {
                if (i % 2 == 0) {
                    wheel_speeds[i] = 0.5;
                } else {
                    wheel_speeds[i] = 1;
                }
            }
        }
        else if (direction == 's') {
            for (unsigned i = 0; i < size; i++) wheel_speeds[i]=-1;
        }
        else if (direction == 'd') {
            for (unsigned i = 0; i < size; i++) {
                if (i % 2 == 0) {
                    wheel_speeds[i] = 1;
                } else {
                    wheel_speeds[i] = 0.5;
                }
            }
        }
        else if (direction == 'e') {
            for (unsigned i = 0; i < size; i++) wheel_speeds[i]=0;
            std::cout << "Shutting Down" << std::endl;
            keep_going = false;
        }
        else {
            std::cout << "Sorry, I didn't get that. Try again." << std::endl;
        }
        //
        for (unsigned i = 0; i < size; i++) {
                std::cout << "wheel at index " << i << " has speed: " << wheel_speeds[i] << std::endl;
        }
    }

}
