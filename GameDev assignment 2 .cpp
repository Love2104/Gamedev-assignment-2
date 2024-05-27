#include <bits/stdc++.h>

using namespace std;

class Vector
{
private:
    float x, y, z;

public:
    Vector(float x, float y, float z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    Vector multiply(float scalar) const
    {
        return Vector(this->x * scalar, this->y * scalar, this->z * scalar);
    }

    Vector divide(float scalar) const
    {
        return Vector(this->x / scalar, this->y / scalar, this->z / scalar);
    }

    float dotProduct(Vector other) const
    {
        return this->x * other.x + this->y * other.y + this->z * other.z;
    }

    Vector crossProduct(Vector other) const
    {
        float newX = this->y * other.z - this->z * other.y;
        float newY = this->z * other.x - this->x * other.z;
        float newZ = this->x * other.y - this->y * other.x;
        return Vector(newX, newY, newZ);
    }

    Vector reverse() const
    {
        return Vector(-this->x, -this->y, -this->z);
    }

    float stp(Vector b, Vector c) const
    {
        return this->x * (b.y * c.z - b.z * c.y) +
               this->y * (b.z * c.x - b.x * c.z) +
               this->z * (b.x * c.y - b.y * c.x);
    }

    Vector unitVector() const
    {
        float magnitude = sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
        return Vector(this->x / magnitude, this->y / magnitude, this->z / magnitude);
    }

    float mag() const
    {
        return sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
    }

    float angleBetween(Vector other) const
    {
        float dotProd = this->dotProduct(other);
        float magnitudes = this->mag() * other.mag();
        float cosine = dotProd / magnitudes;
        return acos(cosine) * (180.0 / 3.14159265358979323846);
    }

    Vector vectorTripleProduct(Vector b, Vector c) const
    {
        Vector crossBC = b.crossProduct(c);
        return this->crossProduct(crossBC);
    }

    Vector projectionOnto(Vector other) const
    {
        float dotProd = this->dotProduct(other);
        float otherMagSq = other.dotProduct(other);
        float scalar = dotProd / otherMagSq;
        return other.multiply(scalar);
    }

    Vector perpendicularProjectionOnto(Vector other) const
    {
        Vector proj = this->projectionOnto(other);
        return Vector(this->x - proj.x, this->y - proj.y, this->z - proj.z);
    }

    Vector operator+(const Vector &other) const
    {
        return Vector(this->x + other.x, this->y + other.y, this->z + other.z);
    }

    Vector operator-(const Vector &other) const
    {
        return Vector(this->x - other.x, this->y - other.y, this->z - other.z);
    }

    void print() const
    {
        cout << fixed << setprecision(2);
        cout << "(" << this->x << ", " << this->y << ", " << this->z << ")" << endl;
    }
};

int main()
{
    float x1, y1, z1, x2, y2, z2, x3, y3, z3, scalar;

    cout << "Enter components of vector 1 (x y z): ";
    cin >> x1 >> y1 >> z1;
    cout << "Enter components of vector 2 (x y z): ";
    cin >> x2 >> y2 >> z2;
    cout << "Enter components of vector 3 (x y z): ";
    cin >> x3 >> y3 >> z3;
    cout << "Enter scalar value: ";
    cin >> scalar;

    Vector vector1(x1, y1, z1);
    Vector vector2(x2, y2, z2);
    Vector vector3(x3, y3, z3);

    cout << "Vector 1 = ";
    vector1.print();
    cout << "Vector 2 = ";
    vector2.print();
    cout << "Vector 3 = ";
    vector3.print();
    cout << "Scalar = " << fixed << setprecision(2) << scalar << endl;

    Vector result_multiply1 = vector1.multiply(scalar);
    cout << "Multiplication of vector 1 by scalar: ";
    result_multiply1.print();

    Vector result_divide1 = vector1.divide(scalar);
    cout << "Division of vector 1 by scalar: ";
    result_divide1.print();

    float dot_product = vector1.dotProduct(vector2);
    cout << "Dot product of vector 1 and vector 2: " << fixed << setprecision(2) << dot_product << endl;

    Vector cross_product = vector1.crossProduct(vector2);
    cout << "Cross product of vector 1 and vector 2: ";
    cross_product.print();

    Vector reverse_vector1 = vector1.reverse();
    cout << "Reversed direction of vector 1: ";
    reverse_vector1.print();

    float stp = vector1.stp(vector2, vector3);
    cout << "Scalar triple product of vectors: " << fixed << setprecision(2) << stp << endl;

    Vector unit_vector1 = vector1.unitVector();
    cout << "Unit vector of vector 1: ";
    unit_vector1.print();

    float angle = vector1.angleBetween(vector2);
    cout << "Angle between vector 1 and vector 2 (in degrees): " << fixed << setprecision(2) << angle << endl;

    Vector vectorTripleProduct = vector1.vectorTripleProduct(vector2, vector3);
    cout << "Vector triple product of vector 1, vector 2, and vector 3: ";
    vectorTripleProduct.print();

    Vector projection = vector1.projectionOnto(vector2);
    cout << "Projection of vector 1 onto vector 2: ";
    projection.print();

    Vector perpProjection = vector1.perpendicularProjectionOnto(vector2);
    cout << "Perpendicular projection of vector 1 onto vector 2: ";
    perpProjection.print();

    Vector addResult = vector1 + vector2;
    cout << "Addition of vector 1 and vector 2: ";
    addResult.print();

    Vector subResult = vector1 - vector2;
    cout << "Subtraction of vector 1 and vector 2: ";
    subResult.print();

    return 0;
}
