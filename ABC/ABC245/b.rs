use proconio::input;
use std::cmp::max;
use std::cmp::min;
use proconio::marker::Chars;
use std::f64::consts::PI;

fn main() {
    input!{
        n: usize,
        a: [i32; n],
    }

    let mut check = vec![0; 2002];
    for i in a {check[i as usize] += 1}
    for i in 0.. {
        if check[i] == 0 {
            println!("{}", i);
            break;
        }
    }
}