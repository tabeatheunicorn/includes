struct x_coordinate_t{
    double value;

    x_coordinate_t operator+(x_coordinate_t& x_coord){
        x_coordinate_t ergebnis;
        ergebnis.value = this->value + x_coord.value;
        return ergebnis;
    }

};


struct y_coordinate_t{
    double value;
};
struct z_coordinate_t{
    double value;
};


struct cartesianCoordinate_t{
private:
    double xCoordinate;
    double yCoordinate;
    double zCoordinate;
    //std::tuple<double, double, double> value;

public:

    cartesianCoordinate_t operator+(cartesianCoordinate_t& otherCoordinate){
        cartesianCoordinate_t result;
        result.xCoordinate = this->xCoordinate+ otherCoordinate.xCoordinate;
        result.yCoordinate = this->yCoordinate+ otherCoordinate.yCoordinate;
        result.zCoordinate = this->zCoordinate+ otherCoordinate.zCoordinate;
        return result;
    }

    cartesianCoordinate_t distance(cartesianCoordinate_t& otherCoordinate){}

    cartesianCoordinate_t operator-(cartesianCoordinate_t& otherCoordinate){
        cartesianCoordinate_t result;
        result.xCoordinate = this->xCoordinate- otherCoordinate.xCoordinate;
        result.yCoordinate = this->yCoordinate- otherCoordinate.yCoordinate;
        result.zCoordinate = this->zCoordinate- otherCoordinate.zCoordinate;
        return result;
    }

    double euklidianDistance(cartesianCoordinate_t& otherCoordinate){

    }

    double abs(){

    }

    void moveInDirectionX(double& arg){
        this->xCoordinate += arg;
    }
    void moveInDirectionY(double& arg){
        this->yCoordinate += arg;
    }
    void moveInDirectionZ(double& arg){
        this->zCoordinate += arg;
    }
    void move(cartesianCoordinate_t& arg){
        this->moveInDirectionX(arg.xCoordinate);
        this->moveInDirectionY(arg.yCoordinate);
        this->moveInDirectionZ(arg.zCoordinate);
    }

    //Rotation nach Std-X-Konvention
    void rotateAroundX(double theta){

    };
    void rotateAroundY(double )

    void rotateAroundOrigin(double theta, double phi){

    }

    void mirrorAtXYPlane(){this->zCoordinate=this->zCoordinate*(-1);}
    void mirrorAtYZPlane(){this->xCoordinate=this->xCoordinate*(-1);}
    void mirrorAtXZPlane(){this->yCoordinate=this->yCoordinate*(-1);}
    void mirrorAtXAxis(){
        mirrorAtXYPlane();
        mirrorAtXZPlane();
    }
    void mirrorAtYAxis(){
        mirrorAtYZPlane();
        mirrorAtXYPlane();
    }
    void mirrorAtZAxis(){
        mirrorAtXZPlane();
        mirrorAtYZPlane();
    }
    void mirrorAtOrigin(){
        mirrorAtXYPlane();
        mirrorAtXZPlane();
        mirrorAtYZPlane();
    }


};