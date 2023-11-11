float add_op(float left, float right){
    return left + right;
}
float subtract_op(float left, float right){
    return left - right;
}
float multiply_op(float left, float right){
    return left * right;
}
float arithmetic_ops(float left, float right, float (*ops)(float, float)){
    return (*ops)(left, right);
}
