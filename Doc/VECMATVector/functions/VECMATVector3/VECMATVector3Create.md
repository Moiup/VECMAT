[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATVector](../../VECMATVector.md)->[VECMATVector3](../../VECMATVector3.md)

# VECMATVector3Create(\_,\_,\_,\_,\_)
Create a vector with the coordinates of the two given points.

## **Declaration**
```C
void VECMATVector3Create(
        float p1X,
        float p1Y,
        float p1Z,
        float p2X,
        float p2Y,
        float p2Z,
        VECMATVector2 v
    )
```


## **Parameters**
**v**  
The vector of size 3 to work with.

**p1X**  
The _x_ coordinate of the first point.

**p1Y**  
The _y_ coordinate of the first point.

**p1Z**  
The _y_ coordinate of the first point.

**p2X**  
The _x_ coordinate of the second point.

**p2Y**  
The _y_ coordinate of the second point.

**p2Z**  
The _z_ coordinate of the second point.

## **Result**
The vector `v` with coodinates calculated with _p1_ and _p2_.
