[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATMatrix](../../VECMATMatrix.md)->[VECMATMatrix4](../../VECMATMatrix4.md)

# VECMATMatrix4ScalarSub(\_,\_,\_)
Substract a scalar to a matrix.

## **Declaration**
```C
void VECMATMatrix4ScalarSub(
		VECMATMatrix4 m,
		VECMATMatrix4 res,
		float r
	)
```


## **Parameters**
**m**  
The matrix to work with.

**r**  
The real value that will be substracted to the matrix `m`

**res**  
The resulting matrix.


## **Result**
The 4x4 matrix `res` resulting from the substraction of `r` to `m`.

## How to
If you don't want to store the result in a new matrix, call the function like this :

```C
VECMATMatrix4ScalarSub(m, m, r);
```
