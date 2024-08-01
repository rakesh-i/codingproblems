function knightMoves(start, end){
    const moves = [
        [2, 1], [2, -1], [-2, 1], [-2, -1],
        [1, 2], [1, -2], [-1, 2], [-1, -2]
    ];
    let queue = [[...start, [start]]];
    const visited = Array.from({ length: 8 }, () => new Array(8).fill(false));
    while(queue.length>0){
        const [i, j, path] = queue.shift();
        
        if(i==end[0]&&j==end[1]){
            return path;
        }
        for (const [di, dj] of moves) {
            const ni = i + di;
            const nj = j + dj;

            if (ni >= 0 && ni < 8 && nj >= 0 && nj < 8 && !visited[ni][nj]) {
                visited[ni][nj] = true;
                queue.push([ni, nj, [...path, [ni, nj]]]);
            }
            
        }
        
    }
    return [-1,-1];
}

const start = [0, 0];
const end = [7, 6];
const result = knightMoves(start, end);
console.log(result);
