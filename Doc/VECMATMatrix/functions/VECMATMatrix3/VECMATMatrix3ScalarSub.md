[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATMatrix](../../VECMATMatrix.md)->[VECMATMatrix3](../../VECMATMatrix3.md)

# VECMATMatrix3ScalarSub(\_,\_,\_)
Substract a scalar to a matrix.

## **Declaration**
```C
void VECMATMatrix3ScalarSub(
		VECMATMatrix3 m,
		VECMATMatrix3 res,
		float r
	)
```


## **Parameters**
**m**  
A 3x3 matrix.

**r**  
The real value that will be substracted to the matrix `m`

**res**  
The resulting 3x3 matrix.


## **Result**
The 3x3 matrix `res` resulting from the substraction of `r` to `m`.

## How to
If you don't want to store the result in a new matrix, call the function like this :

```C
VECMATMatrix3ScalarSub(m, m, r);
```
