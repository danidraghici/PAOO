class IVehicul {
public:
    virtual int GetNumarRoti() const = 0;
    virtual bool AreMotor() const = 0;
    virtual void SetMotor(bool areMotor) = 0;
};