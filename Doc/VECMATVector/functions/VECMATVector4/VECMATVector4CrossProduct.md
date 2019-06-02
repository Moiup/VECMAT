[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATVector](../../VECMATVector.md)->[VECMATVector4](../../VECMATVector4.md)

# VECMATVector4CrossProduct(\_,\_,\_)
The cross product of two vectors.

## **Declaration**
```C
void VECMATVector4CrossProduct(
        VECMATVector4 v1,
        VECMATVector4 v2,
        VECMATVector4 vn
    )
```


## **Parameter**
**v1**  
The first vector of size 4 used to calculate the cross product

**v2**  
The second vector of size 4 used to calculate the cross product.

**vn**  
The vector of size 4 where the cross product is stored.

## **Result**
The cross product of `v1` with `v2`stored in `vn`. The _w_ coordinate is set to 1.
