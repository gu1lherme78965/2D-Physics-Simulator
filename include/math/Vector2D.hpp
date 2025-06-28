#ifndef VECTOR2D_HPP
#define VECTOR2D_HPP

#include <cmath>
#include <iostream>

class Vector2D {
    // holds vector components
    float x_, y_;

    // --Constructors--
    // default constructor initializes the components to value zero
    Vector2D(): x_(0.0f), y_(0.0f) {}

    // parameter construcotr initializes the compoents to their respective values
    Vector2D(float x, float y): x_(x), y_(y) {}

    // single parameter constructor initializes both components to value
    Vector2D(float value): x_(value), y_(value) {}

    // copy constructor for class Vector2D
    Vector2D(const Vector2D& other): x_(other.x_), y_(other.y_) {}

    
    // --Arithmetic Operators--
    // vector subtraction
    Vector2D operator-(const Vector2D other) const{
        return {x_ - other.x_, y_ - other.y_};
    }

    // vector addition
    Vector2D operator+(const Vector2D other) const{
        return {x_ + other.x_, y_ + other.y_};
    }

    // scalar multiplication
    Vector2D operator*(float scalar) const{
        return {x_ * scalar, y_ * scalar};
    }

    // scalar division
    Vector2D operator/(float scalar) const{
        // handle null division
        if (scalar == 0.0f) return {0.0f, 0.0f};
        return {x_ / scalar, y_ / scalar};
    }


    // --Assignment Operators--
    // vector assignment
    void operator=(const Vector2D other) {
        x_ = other.x_;
        y_ = other.y_;
    }

    // scalar assignment
    void operator=(float scalar) {
        x_ = scalar;
        y_ = scalar;
    }

    // vector addition assignment
    void operator+=(const Vector2D other) {
        x_ += other.x_;
        y_ += other.y_;
    }

    // scalar addition assignment
    void operator+=(float scalar) {
        x_ += scalar;
        y_ += scalar;
    }

    // vector subtraction assignment
    void operator-=(const Vector2D other) {
        x_ -= other.x_;
        y_ -= other.y_;
    }

    // scalar subtraction assignment
    void operator-=(float scalar) {
        x_ -= scalar;
        y_ -= scalar;
    }

    // vector multiplication assignment
    void operator*=(const Vector2D other) {
        x_ *= other.x_;
        y_ *= other.y_;
    }

    // scalar multiplication assignment
    void operator*=(float scalar) {
        x_ *= scalar;
        y_ *= scalar;
    }

    // vector division assignment
    void operator/=(const Vector2D other) {
        // handle null division
        if (other.x_ == 0.0f) x_ = 0.0f;
        else x_ /= other.x_;

        if (other.y_ == 0.0f) y_ = 0.0f;
        else y_ /= other.y_;
    }

    // scalar division assignment
    void operator/=(float scalar) {
        // handle null division 
        if (scalar == 0.0f) x_ = 0.0f, y_ = 0.0f;
        else x_ /= scalar, y_ /= scalar;
    }

};

#endif // VECTOR2D_HPP