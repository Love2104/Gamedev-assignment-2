# GameDev: 3D Renderer Assignment 2

## Description
This project implements a 3D vector manipulation library in C++. It provides various functionalities for performing operations on 3D vectors, including scalar multiplication, division, vector addition, subtraction, dot product, cross product, vector reversal, modulus calculation, angle calculation, rotation, and more.

## Author
- Name: Love Chourasia
- Roll No.: 230608

## Functions

1. **Scalar Multiplication**
   - Description: Performs scalar multiplication on a 3D vector.
   - Method: `multiply`
   - Usage: `Vector multiply(float scalar)`

2. **Scalar Division**
   - Description: Performs scalar division on a 3D vector.
   - Method: `divide`
   - Usage:   `Vector divide(float scalar) `

3. **Dot Product**
   - Description: Calculates the dot product of two 3D vectors.
   - Method: `dotProduct`
   - Usage: `float dotProduct(Vector other)`

4. **Cross Product (Cross Product)**
   - Description: Calculates the cross product of two 3D vectors.
   - Method: `crossProduct`
   - Usage: `Vector crossProduct(Vector other)`

5. **Reverse Direction**
   - Description: Reverses the direction of a 3D vector.
   - Method: ` Vector reverse()`
   - Usage: `reverse()`


6. **Scalar Triple Product**
    - Description: Calculates the scalar triple product of three 3D vectors.
    - Method: `stp(vector2, vector3)`
    - Usage: `float stp(Vector b, Vector c) `

11. **Unit Vector**
    - Description: Calculates the unit vector of a 3D vector.
    - Method: `unit_vector`
    - Usage: `Vector3D unit_vector()`

12. **Polar Representation of Vector**
    - Description: Calculates the polar representation of a 3D vector.
    - Method: `vector_generator`
    - Usage: `Vector_Generator vector_generator()`

13. **Angle Between Vectors**
    - Description: Calculates the angle between two 3D vectors.
    - Method: `angle_vectors`
    - Usage: `ft angle_vectors(const Vector3D& vector2)`

14. **Intersection Point of Vector and Plane**
    - Description: Calculates the intersection point of a 3D vector and a plane.
    - Method: `intersectionof_vectorandplanes`
    - Usage: `Vector3D intersectionof_vectorandplanes(const Vector_Generator& vector2)`

15. **Vector Triple Product**
    - Description: Calculates the vector triple product of three 3D vectors.
    - Method: `vector_triple_product`
    - Usage: `Vector3D vector_triple_product(const Vector3D& X, const Vector3D& Y)`

16. **Rotation About X Axis**
    - Description: Rotates a 3D vector about the X-axis by 
