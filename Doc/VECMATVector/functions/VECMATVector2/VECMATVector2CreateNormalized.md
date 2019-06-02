[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATVector](../../VECMATVector.md)->[VECMATVector2](../../VECMATVector2.md)

# VECMATVector2CreateNormalized(\_,\_,\_,\_,\_)
Create a normalized vector with the coordinates of the two given points.

## **Declaration**
```C
void VECMATVector2CreateNormalized(
        float p1X,
        float p1Y,
        float p2X,
        float p2Y,
        VECMATVector2 v
    )
```


## **Parameters**
**v**  
The vector of size 2 to work with.

**p1X**  
The _x_ coordinate of the first point.

**p1Y**  
The _y_ coordinate of the first point.

**p2X**  
The _x_ coordinate of the second point.

**p2Y**  
The _y_ coordinate of the second point.

## **Result**
The vector `v` with the normalized coodinates calculated with _p1_ and _p2_.
