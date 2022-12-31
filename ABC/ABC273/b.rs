use proconio::input;
use std::cmp::max;
use std::cmp::min;
use proconio::marker::Chars;

fn main() {
    input!{
        mut x: i64,
        k: usize,
    }

    for i in 0..k {
        let mut ten = 10;
        for cnt in 0..i {ten *= 10}
        if x % ten / (ten / 10) >= 5 {
            x = x / ten * ten;
            x += ten;
        } else {
            x = x / ten * ten;
        }
    }
    println!("{}", x);
}