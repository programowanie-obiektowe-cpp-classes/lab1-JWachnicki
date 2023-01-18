class Wektor2D
{
    public:
        Wektor2D(){x=0.;y=0.;}
        Wektor2D(double u,double v)
        {
            x=u;
            y=v;
        }

    void setX(double a){x=a;}
    void setY(double b){y=b;}

    double getX(){return x;}
    double getY(){return y;}

    void print()
    {
        std::cout<<"X:"<<x<<"\t Y:"<<y<<"\n";
    }

    Wektor2D operator + (Wektor2D &vec)
    {
         Wektor2D v;
         v.setX(x+vec.getX());
         v.setY(y+vec.getY());
         return v;
    }
    double operator * (Wektor2D &v1)
    {
        double product = x*v1.getX()+y*v1.getY();
        return product;
    }
    private:
    double x;
    double y; 
};
