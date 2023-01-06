use proconio::input;
use std::cmp::max;
use std::cmp::min;
use proconio::marker::Chars;
use std::f64::consts::PI;

fn main() {
    input!{
        x: i32,
        y: i32,
        z: i32,
    }

    if x * y < 0 {
        println!("{}", x.abs());
    } else if x.abs() < y.abs() {
        println!("{}", x.abs());
    } else {
        if y * z > 0 && y.abs() < z.abs() {
            println!("-1");
        } else {
            println!("{}", z.abs() + (x - z).abs());
        }
    }
}