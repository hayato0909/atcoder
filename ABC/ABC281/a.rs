use proconio::input;

fn main() {
    input!{
        n:i64,
    }

    for i in (0..n+1).rev() {
        println!("{}",i);
    }
}