[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATMatrix](../../VECMATMatrix.md)->[VECMATMatrix2](../../VECMATMatrix2.md)

# VECMATMatrix2ScalarDivide(\_,\_,\_)
Divide a matrix by a scalar.

## **Declaration**
```C
void VECMATMatrix2ScalarDivide(
		VECMATMatrix2 m,
		VECMATMatrix2 res,
		float r
	)
```


## **Parameters**
**m**  
A 2x2 matrix.

**r**  
The real value that will divide the matrix `m`

**res**  
The resulting 2x2 matrix.


## **Result**
The 2x2 matrix `res` set with the values of `m` divided by `r`.

## How to
If you don't want to store the result in a new matrix, call the function like this :

```C
VECMATMatrix2ScalarDivide(m, m, r);
```