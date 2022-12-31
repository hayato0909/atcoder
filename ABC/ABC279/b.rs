use proconio::input;
use std::cmp::max;
use std::cmp::min;

fn main() {
    input!{
        s: String,
        t: String,
    }

    let s_tmp: Vec<char> = s.chars().collect();
    let t_tmp: Vec<char> = t.chars().collect();

    if s.len() < t.len() {
        println!("No");
        return;
    }

    for i in 0..s.len()-t.len()+1 {
        let mut flag = true;
        for j in 0..t.len() {
            if t_tmp[j] != s_tmp[i+j] {flag = false}
        }
        if flag {
            println!("Yes");
            return;
        }
    }

    println!("No");
}