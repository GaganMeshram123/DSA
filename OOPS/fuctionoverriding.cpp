#inlcude<iostrem>
using namespace std;

class parent {
    public:
    virtual void print(){
        cout<<"parent class"<<endl;

    }
    void show(){
        cout<<"parent class"<<endl;

    }
};

class child: public parent{
    public:
    void print(){
        cout<<"parent class"<<endl;

    }
    void show(){
        cout<<"parent class"<<endl;

    }
}
int main(){
    parent *p; //pointer variable 

}