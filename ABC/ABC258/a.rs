use proconio::input;
use std::cmp::max;
use std::cmp::min;

fn main() {
    input!{
        k: i32,
    }

    let mut h = 21;
    let mut m: i32;
    if k < 60 {m = k}
    else {
        m = k - 60;
        h += 1;
    }
    print!("{}:", h);
    if m < 10 {println!("0{}", m)}
    else {println!("{}", m)}
}