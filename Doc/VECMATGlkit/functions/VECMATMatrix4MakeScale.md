[Main menu](../../../Readme.md)->[Doc](../../VECMATKit.md)->[VECMATGlkit](../VECMATGlkit.md)

# VECMATMatrix4MakeScale(\_,\_,\_,\_,\_)
Scale an existing 4x4 matrix.

## **Declaration**
```C
void VECMATMatrix4MakeScale(
		VECMATMatrix4 init,
		VECMATMatrix4 res,
		float Sx,
		float Sy,
		float Sz
	)
```


## **Parameters**
**init**  
A 4x4 matrix.

**res**  
A 4x4 matrix.

**Sx**  
The X scale value.

**Sy**  
The Y scale value.

**Sz**  
The Z scale value.

## **Result**
The `res` matrix resulting from the scaling of `init`.

## **How to**
If you don't want to store the result in a new matrix, call the function like this :

```C
VECMATMatrix4MakeScale(m, m, Sx, Sy, Sz);
```