[Main menu](../../../Readme.md)->[Doc](../../VECMATKit.md)->[VECMATGlkit](../VECMATGlkit.md)

# VECMATMatrix4LookAt(\_,\_,\_,\_,\_,\_,\_,\_,\_,\_)
Create the 4x4 perspective projection matrix.

## **Declaration**
```C
void VECMATMatrix4LookAt(
		float Cx,
		float Cy,
		float Cz,
		float Tx,
		float Ty,
		float Tz,
		float Ux,
		float Uy,
		float Uz, 
		VECMATMatrix4 look
	)
```


## **Parameters**
[info](https://www.khronos.org/registry/OpenGL-Refpages/gl2.1/xhtml/gluLookAt.xml)

**Cx**  
The X coordinate of the camera position.

**Cy**  
The Y coordinate of the camera position.

**Cz**  
The Z coordinate of the camera position.

**Tx**  
The X coordinate of the target position.

**Ty**  
The Y coordinate of the target position.

**Tz**  
The Z coordinate of the target position.

**Ux**  
The X coordinate of the up vector.

**Uy**  
The Y coordinate of the up vector.

**Uz**  
The Z coordinate of the up vector.

**look**  
A 4x4 matrix.

**projection**  
A 4x4 matrix.

## **Result**
The 4x4 look at matrix in `look`
