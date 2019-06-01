[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATMatrix](../../VECMATMatrix.md)->[VECMATMatrix4](../../VECMATMatrix4.md)

# VECMATMatrix4ScalarMult(\_,\_,\_)
Multiply a matrix by a scalar.

## **Declaration**
```C
void VECMATMatrix4ScalarMult(
		VECMATMatrix4 m,
		VECMATMatrix4 res,
		float r
	)
```


## **Parameters**
**m**  
A 4x4  matrix.

**r**  
The real value that will multiply the matrix `m`

**res**  
The resulting 4x4 matrix.


## **Result**
The 4x4 matrix `res` set with the values of `m` multiplied by `r`.

## How to
If you don't want to store the result in a new matrix, call the function like this :

```C
VECMATMatrix4ScalarMult(m, m, r);
```
