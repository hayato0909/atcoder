use proconio::input;
// use superslice::Ext;
// use std::cmp::max;
use std::cmp::min;
use petgraph::unionfind::UnionFind;

fn main() {
    input! {
        n: usize,
        xy: [[i32; 2]; n],
    }
    let mut x = vec![(0, 0); n];
    let mut y = vec![(0, 0); n];
    for i in 0..n {
        x[i].0 = xy[i][0];
        x[i].1 = i;
        y[i].0 = xy[i][1];
        y[i].1 = i;
    }
    x.sort();
    y.sort();

    let mut tree :UnionFind<usize> = UnionFind::new(n+1);
    let mut  v: Vec<(i32, usize, usize)> = Vec::new();

    for i in 0..n-1 {
        let ax = x[i].1;
        let bx = x[i+1].1;
        let lenx = min((xy[ax][0] - xy[bx][0]).abs(), (xy[ax][1] - xy[bx][1]).abs());
        v.push((lenx, ax, bx));
        let ay = y[i].1;
        let by = y[i+1].1;
        let leny = min((xy[ay][0] - xy[by][0]).abs(), (xy[ay][1] - xy[by][1]).abs());
        v.push((leny, ay, by));
    }
    v.sort();
    let mut ans = 0;

    for (len, a, b) in v {
        if !tree.equiv(a, b) {
            ans += len;
            tree.union(a, b);
        }
    }
    println!("{}", ans);
}
