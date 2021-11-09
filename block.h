#include <iostream>
#include <vector>
#include <string>

class Block{
    private:
        void* pData_;
    public:
        Block();
        Block(void* p);
        ~Block();
};

//Constructor initializer list
Block::Block() : pData_(NULL){

}

Block::Block(void* p) : pData_(p){

}

Block::~Block(){

}
