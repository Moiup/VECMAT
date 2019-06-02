[Main menu](../../Readme.md)->[Doc](../VECMATKit.md)

# VECMATGlkit

Contains a set of functions for creating the matrixes used by OpenGL.

## Transformation
### **Translation**
```C
void VECMATMatrix4CreateTranslation(VECMATMatrix4, float, float, float)
```
Create the 4x4 translation matrix. [More here.](./functions/VECMATMatrix4CreateTranslation.md)

```C
void VECMATMatrix4MakeTranslation(VECMATMatrix4, VECMATMatrix4, float, float, float)
```
Translate an existing 4x4 matrix. [More here.](./functions/VECMATMatrix4MakeTranslation.md)

### **Rotation**
```C
void VECMATMatrix4CreateRotationX(VECMATMatrix4, float)
```
Create the 4x4 rotation matrix around the X axis. [More here.](./functions/VECMATMatrix4CreateRotationX.md)

```C
void VECMATMatrix4CreateRotationY(VECMATMatrix4, float)
```
Create the 4x4 rotation matrix around the Y axis. [More here.](./functions/VECMATMatrix4CreateRotationY.md)

```C
void VECMATMatrix4CreateRotationZ(VECMATMatrix4, float)
```
Create the 4x4 rotation matrix around the Z axis. [More here.](./functions/VECMATMatrix4CreateRotationZ.md)

### **Scale**
```C
void VECMATMatrix4CreateScale(VECMATMatrix4, float, float, float)
```
Create the 4x4 scaling matrix. [More here.](./functions/VECMATMatrix4CreateScale.md)

```C
void VECMATMatrix4MakeScale(VECMATMatrix4, VECMATMatrix4, float, float, float)
```
Scale an existing 4x4 matrix. [More here.](./functions/VECMATMatrix4MakeScale.md)

## Projection
### **Orhtographic**
```C
void VECMATMatrix4ProjectionOrtho(float, flaot, float, float, float, float, VECMATMatrix4)
```
Create the 4x4 orthographic projection matrix. [More here.](./functions/VECMATMatrix4ProjectionOrtho.md)

### **Perspective**
```C
void VECMATMatrix4ProjectionPerspective(float, float, float, float, VECMATMatrix4)
```
Create the 4x4 perspective projection matrix. [More here.](./functions/VECMATMatrix4CreateScale.md)

### **Frustum**
```C
void VECMATMatrix4ProjectionFrustum(float, flaot, float, float, float, float, VECMATMatrix4)
```
Create the 4x4 frustum projection matrix. [More here.](./functions/VECMATMatrix4ProjectionFrustum.md)

## LookAt
### **LookAt**
```C
void VECMATMatrix4LookAt(float, float, float, float, float, float, float, float, float, VECMATMatrix4)
```
Create the 4x4 Look At matrix. [More here.](./functions/VECMATMatrix4LookAt.md)
