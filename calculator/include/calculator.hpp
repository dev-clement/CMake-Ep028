#pragma once

//! A calculator class
/*!
    This class is about doing some computation using classic operators
*/
class Calculator {
public:

    //! A member adding two arguments and returning the result
    /*!
]      \param lhs the left-hand-side of the operation
       \param rhs the right-hand-side of the operation
       \return the sum of lhs and rhs parameters
    */
    int add (int lhs, int rhs);

    //! A member subtracting two arguments and returning the result
    /*!
      \param lhs the left-hand-side of the operation
      \param rhs the right-hand-side of the operation
      \return the substract of lhs and rhs parameters
    */
    int sub (int lhs, int rhs);

    //! A member multiplying two arguments and returning the result
    /*!
     \param lhs the left-hand-side of the operation
     \param rhs the right-hand-side of the operation
     \return the multiplying of lhs and rhs parameters
    */
    int mul (int lhs, int rhs);

    //! A member dividing two arguments and returning the result
    /*!
     \param lhs the left-hand-side of the operation
     \param rhs the right-hand-side of the operation
     \return the division between lhs and rhs
    */
    int div (int lhs, int rhs);
    
    //! A member of doing modulus between lhs and rhs
    /*!
     \param lhs the left-hand-side of the operation
     \param rhs the right-hand-side of the operation
     \return the modulus between lhs and rhs
     */
    int mod (int lhs, int rhs);
};