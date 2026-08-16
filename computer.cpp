#include <iostream>
#include <string>
using namespace std;

class AbstractElement{
    public:
        string factory;
        virtual void run() = 0;
        virtual ~AbstractElement() = default;
};

class CPU : public AbstractElement{
    public:
        void run(){
            cout << "CPU RUNNING" <<endl;
        }
};

class GPU : public AbstractElement{
    public:
        void run(){
            cout << "GPU RUNNING" << endl;
        }
};

class RAM : public AbstractElement{
    public:
        void run(){
            cout << "RAM RUNNING" <<endl;
        }
};


class Computer{
    public:
        CPU cpu;
        GPU gpu;
        RAM ram;
        Computer(CPU cpu, GPU gpu, RAM ram): cpu(cpu), gpu(gpu), ram(ram){};
        void cpu_run(){
            cpu.run();
        }

        void gpu_run(){
            gpu.run();
        }

        void ram_run(){
            ram.run();
        }
};






int main(){






    return 0;
}