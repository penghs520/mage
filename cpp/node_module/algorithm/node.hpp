#pragma once

#include <mgp.hpp>
#include <string>
#include <unordered_set>

namespace Node {

/*relationships_exist constants*/
constexpr std::string_view kProcedureRelationshipsExist = "relationships_exist";
constexpr std::string_view kReturnRelationshipsExist = "result";
constexpr std::string_view kArgumentNodesRelationshipsExist = "node";
constexpr std::string_view kArgumentRelationshipsRelationshipsExist = "relationships";

/* relationship_exists constants */
constexpr std::string_view kReturnRelationshipExists = "exists";
constexpr std::string_view kProcedureRelationshipExists = "relationship_exists";
constexpr std::string_view kArgumentsNode = "node";
constexpr std::string_view kArgumentsPattern = "pattern";
constexpr std::string_view kResultRelationshipExists = "exists";

/* relationship_types constants */
constexpr std::string_view kProcedureRelationshipTypes = "relationship_types";
constexpr std::string_view kRelationshipTypesArg1 = "node";
constexpr std::string_view kRelationshipTypesArg2 = "types";
constexpr std::string_view kResultRelationshipTypes = "relationship_types";

void RelationshipsExist(mgp_list *args, mgp_graph *memgraph_graph, mgp_result *result, mgp_memory *memory);

bool RelationshipExist(const mgp::Node &node, std::string &rel_type);

bool FindRelationship(std::unordered_set<std::string_view> types, mgp::Relationships relationships);

void RelationshipExists(mgp_list *args, mgp_graph *memgraph_graph, mgp_result *result, mgp_memory *memory);

void RelationshipTypes(mgp_list *args, mgp_graph *memgraph_graph, mgp_result *result, mgp_memory *memory);

}  // namespace Node
