#include<string>
class ouvrage{
    private:
        std::string code;
        std::string titre;
    public:
        ouvrage(std::string titre);
        virtual void print();
        std::string getCode();
};

