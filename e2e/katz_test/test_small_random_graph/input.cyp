CREATE (a:Node {id: 0});
CREATE (a:Node {id: 1});
CREATE (a:Node {id: 2});
CREATE (a:Node {id: 3});
CREATE (a:Node {id: 4});
CREATE (a:Node {id: 5});
CREATE (a:Node {id: 6});
MATCH (a:Node {id: 0}) MATCH (b:Node {id: 5}) CREATE (a)-[:RELATION]->(b);
MATCH (a:Node {id: 0}) MATCH (b:Node {id: 1}) CREATE (a)-[:RELATION]->(b);
MATCH (a:Node {id: 1}) MATCH (b:Node {id: 4}) CREATE (a)-[:RELATION]->(b);
MATCH (a:Node {id: 2}) MATCH (b:Node {id: 1}) CREATE (a)-[:RELATION]->(b);
MATCH (a:Node {id: 3}) MATCH (b:Node {id: 1}) CREATE (a)-[:RELATION]->(b);
MATCH (a:Node {id: 4}) MATCH (b:Node {id: 0}) CREATE (a)-[:RELATION]->(b);
MATCH (a:Node {id: 4}) MATCH (b:Node {id: 3}) CREATE (a)-[:RELATION]->(b);
MATCH (a:Node {id: 4}) MATCH (b:Node {id: 1}) CREATE (a)-[:RELATION]->(b);
MATCH (a:Node {id: 5}) MATCH (b:Node {id: 0}) CREATE (a)-[:RELATION]->(b);
MATCH (a:Node {id: 5}) MATCH (b:Node {id: 4}) CREATE (a)-[:RELATION]->(b);