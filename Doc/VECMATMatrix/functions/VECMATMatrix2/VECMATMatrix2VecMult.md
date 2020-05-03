[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATMatrix](../../VECMATMatrix.md)->[VECMATMatrix2](../../VECMATMatrix2.md)

# VECMATMatrix2VecMult(\_,\_,\_)
Multiply a matrix with a vector.

## **Declaration**
```C
void VECMATMatrix2VecMult()
		VECMATMatrix2 m,
		VECMATVector2 vec2,
		VECMATVector2 res
	)
```


## **Parameters**
**m**
A 2x2 matrix.

**vec2**
A vector of degree 2.

**res**
The resulting vector of degree 2.

## **Result**
The 2 degrees' vector `res` resulting from the multoblication of `m` with `vec2`.

## How to
If you don't want to store the result in a new matrix, call the function like this:

```C
VECMATMatrix2VecMult(m, vec2, vec2);
```

