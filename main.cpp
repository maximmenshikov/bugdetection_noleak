
class Object
{
private:
    int n;

public:
    Object()
    {
        delete this;
    }

    ~Object()
    {
    }

    virtual void foo()
    {
        n = 5;
    }
};

int main()
{
    Object *obj = new Object();
    obj->foo();
    obj = new Object();
    obj->foo();
    return 0;
}
