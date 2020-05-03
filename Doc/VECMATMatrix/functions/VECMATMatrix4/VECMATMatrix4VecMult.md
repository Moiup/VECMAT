[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATMatrix](../../VECMATMatrix.md)->[VECMATMatrix4](../../VECMATMatrix4.md)

# VECMATMatrix4VecMult(\_,\_,\_)
Multiply a matrix with a vector.

## **Declaration**
```C
void VECMATMatrix4VecMult()
		VECMATMatrix4 m,
		VECMATVector4 vec4,
		VECMATVector4 res
	)
```


## **Parameters**
**m**  
A 4x4 matrix.

**vec4**
A vector of degree 4.

**res**
The resulting vector of degree 4.


## **Result**
The 4 degrees' vector `res` resulting from the multoblication of `m` with `vec4`.

## How to
If you don't want to store the result in a new matrix, call the function like this:

```C
VECMATMatrix4VecMult(m, vec4, vec4);
```

