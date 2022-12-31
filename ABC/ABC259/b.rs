use proconio::input;
use std::cmp::max;
use std::cmp::min;
use proconio::marker::Chars;
use std::f64::consts::PI;

fn main() {
    input!{
        a: f64,
        b: f64,
        d: f64,
    }

    let rad: f64 = d / 180. * PI;
    let x = a*rad.cos() - b*rad.sin();
    let y = a*rad.sin() + b*rad.cos();
    println!("{} {}", x, y);
}