use proconio::input;

fn main() {
    input!{
        mut a: i32,
        mut b: i32,
    }

    let mut ans = 0;

    if a % 2 == 1 || b % 2 == 1 {
        ans += 1;
    }
    a -= a % 2;
    b -= b % 2;

    if a >= 4 || b >= 4 {
        ans += 4;
    }
    if a >= 4 {a -= 4;}
    if b >= 4 {b -= 4;}

    if a >= 2 || b >= 2 {ans += 2}

    println!{"{}", ans};
}