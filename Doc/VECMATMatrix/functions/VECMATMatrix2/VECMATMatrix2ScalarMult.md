[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATMatrix](../../VECMATMatrix.md)->[VECMATMatrix2](../../VECMATMatrix2.md)

# VECMATMatrix2ScalarMult(\_,\_,\_)
Multiply a matrix by a scalar.

## **Declaration**
```C
void VECMATMatrix2ScalarMult(
		VECMATMatrix2 m,
		VECMATMatrix2 res,
		float r
	)
```


## **Parameters**
**m**  
A 2x2  matrix.

**r**  
The real value that will multiply the matrix `m`

**res**  
The resulting 2x2 matrix.


## **Result**
The 2x2 matrix `res` set with the values of `m` multiplied by `r`.

## How to
If you don't want to store the result in a new matrix, call the function like this :

```C
VECMATMatrix2ScalarMult(m, m, r);
```