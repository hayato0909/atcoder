use proconio::input;
// use superslice::Ext;
// use std::cmp::max;
// use std::cmp::min;
use std::collections::VecDeque;
// use petgraph::unionfind::UnionFind;

fn main() {
    input! {
        n: usize,
        abc: [[usize; 3]; n-1],
        q: usize, 
        k: usize,
        xy: [[usize; 2]; q],

    }
    let mut v: Vec<Vec<(usize, i64)>> = vec![vec![(0, 0);0]; n];
    for i in abc {
        v[i[0]-1].push((i[1]-1, i[2] as i64));
        v[i[1]-1].push((i[0]-1, i[2] as i64));
    }

    let mut d: Vec<i64> = vec![-1; n];
    let mut Q = VecDeque::new();
    Q.push_front(k-1);
    d[k-1] = 0;
    while Q.len() != 0 {
        let now = Q.pop_back().unwrap();
        for i in &v[now] {
            let next = i.0;
            let dist = i.1;
            if d[next] == -1 {
                Q.push_front(next);
                d[next] = d[now] + dist;
            }
        }
    }

    for i in 0..q {
        println!("{}", d[xy[i][0]-1] + d[xy[i][1]-1]);
    }
}